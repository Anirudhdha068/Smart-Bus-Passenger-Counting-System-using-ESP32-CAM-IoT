import cv2



cap = cv2.VideoCapture(0)

frontal_face_cascade = cv2.CascadeClassifier(
    cv2.data.haarcascades + "haarcascade_frontalface_default.xml"
)

profile_face_cascade = cv2.CascadeClassifier(
    cv2.data.haarcascades + "haarcascade_profileface.xml"
)

while True:
    ret, frame = cap.read()

    if not ret:
        print("Stream not working")
        break

    # Better resolution
    frame = cv2.resize(frame, (480, 320))

    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Improve detection
    gray = cv2.equalizeHist(gray)

    frontal_faces = frontal_face_cascade.detectMultiScale(gray, 1.1, 3)
    profile_faces = profile_face_cascade.detectMultiScale(gray, 1.1, 3)

    total_faces = len(frontal_faces) + len(profile_faces)

    for (x, y, w, h) in frontal_faces:
        cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 255, 0), 2)

    for (x, y, w, h) in profile_faces:
        cv2.rectangle(frame, (x, y), (x+w, y+h), (255, 0, 0), 2)

    cv2.putText(frame, f"Faces: {total_faces}", (10,30),
                cv2.FONT_HERSHEY_SIMPLEX, 1, (0,0,255), 2)

    cv2.imshow("ESP32-CAM", frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
