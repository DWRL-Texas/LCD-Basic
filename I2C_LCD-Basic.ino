
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {

//SDA to A4, SCL to A5
 lcd.init();
 lcd.backlight();
 
 lcd.print("Hello, DFMIers!");
}

void loop() {
 
}
