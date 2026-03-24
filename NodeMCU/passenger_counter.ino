#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Ultrasonic Pins
#define TRIG1 D5
#define ECHO1 D6

#define TRIG2 D7
#define ECHO2 D8

int count = 0;

bool entryFlag = false;
bool exitFlag = false;

long getDistance(int trig, int echo) {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duration = pulseIn(echo, HIGH);
  long distance = duration * 0.034 / 2;
  return distance;
}

void setup() {
  Serial.begin(9600);

  pinMode(TRIG1, OUTPUT);
  pinMode(ECHO1, INPUT);

  pinMode(TRIG2, OUTPUT);
  pinMode(ECHO2, INPUT);

  Wire.begin(D2, D1);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED failed");
    while (true);
  }

  display.clearDisplay();
}

void loop() {
  long dist1 = getDistance(TRIG1, ECHO1);
  long dist2 = getDistance(TRIG2, ECHO2);

  // ENTRY
  if (dist1 < 10 && !entryFlag) {
    count++;
    entryFlag = true;
    Serial.println("Entered");
  }

  if (dist1 > 15) {
    entryFlag = false;
  }

  // EXIT
  if (dist2 < 10 && !exitFlag) {
    if (count > 0) count--;
    exitFlag = true;
    Serial.println("Exited");
  }

  if (dist2 > 15) {
    exitFlag = false;
  }

  // OLED
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);

  display.setCursor(10, 20);
  display.print("People:");
  display.setCursor(40, 45);
  display.print(count);

  display.display();

  delay(200);
}
