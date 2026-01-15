#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define PIR_PIN 2
#define BUZZER 8

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER, OUTPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Motion Alarm");
  delay(2000);
  lcd.clear();
}

void loop() {
  int motion = digitalRead(PIR_PIN);

  if(motion == HIGH) {
    digitalWrite(BUZZER, HIGH);
    lcd.setCursor(0,0);
    lcd.print("Motion Detected");
    lcd.setCursor(0,1);
    lcd.print("ALARM ON ");
  } else {
    digitalWrite(BUZZER, LOW);
    lcd.setCursor(0,0);
    lcd.print("No Motion     ");
    lcd.setCursor(0,1);
    lcd.print("System Safe   ");
  }

  delay(500);
}
