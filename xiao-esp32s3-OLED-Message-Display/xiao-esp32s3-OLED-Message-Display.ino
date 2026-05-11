#include <Wire.h>
#include <U8x8lib.h>

U8X8_SSD1306_128X64_NONAME_HW_I2C oled(U8X8_PIN_NONE);

void setup() {
  Wire.begin(SDA, SCL);

  oled.begin();
  oled.setPowerSave(0);
  oled.clearDisplay();
  oled.setFlipMode(1);   // if blank, try 0
  oled.setFont(u8x8_font_chroma48medium8_r);

  oled.drawString(0,0,"Hello");
  oled.drawString(0,1,"XIAO OLED");
}

void loop() {
}