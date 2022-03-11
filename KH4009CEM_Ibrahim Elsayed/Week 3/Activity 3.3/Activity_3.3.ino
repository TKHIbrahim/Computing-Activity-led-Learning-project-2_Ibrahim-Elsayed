#include <LiquidCrystal.h>
int potPin = 39 ;
int readValue = 0 ;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int val;
void setup() {
pinMode(potPin, INPUT);
Serial.begin(9600);
lcd.begin(16, 2);
}
void loop() 
{
readValue = analogRead(potPin);
lcd.setCursor(0, 0);
val = map(readValue, 0, 1023, 0, 255);
lcd.print(val);
Serial.println(val);
}
