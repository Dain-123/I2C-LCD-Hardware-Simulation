#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Wire.begin(); 
  lcd.init();                      
  lcd.backlight();
  
  // Line 1: Clear, static header
  lcd.setCursor(0, 0);
  lcd.print("IC TEST IN PROG.");
}

void loop() {
  // Line 2: Simulating a live hardware parameter check
  lcd.setCursor(0, 1);
  lcd.print("VDD Volt: 5.01V ");
  delay(1500);
  
  lcd.setCursor(0, 1);
  lcd.print("Clock: 16.00 MHz");
  delay(1500);

  lcd.setCursor(0, 1);
  lcd.print("TEST STATUS:PASS");
  delay(3000);
}
