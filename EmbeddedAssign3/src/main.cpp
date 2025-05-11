#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH      128   // OLED display width, in pixels
#define SCREEN_HEIGHT     64    // OLED display height, in pixels
#define OLED_RESET        -1    // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS    0x3C  ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

// 构造对象 连接到I2C(SDA、SCL引脚)的SSD1306声明
Adafruit_SSD1306 OLED(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  // OLED初始化
  OLED.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
  // OLED清除显示
  OLED.clearDisplay();
  // OLED设置光标位置
  OLED.setCursor(1, 1);
  // 设置字体颜色
  OLED.setTextColor(SSD1306_WHITE);
  // 显示字符串内容
  OLED.setTextSize(2);

  OLED.println("Hello, world!");

  OLED.display();

  delay(3000);

  OLED.clearDisplay();

  // Define the bitmap - this is a simple 16x16 smiley face
  // You can create your own bitmap using online tools or image converters
  static const unsigned char PROGMEM smiley_bmp[] = {
    0x00, 0x00, 0x07, 0xE0, 0x0F, 0xF0, 0x1C, 0x38, 0x38, 0x1C, 0x30, 0x0C, 
    0x70, 0x0E, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x70, 0x0E, 0x30, 0x0C, 
    0x38, 0x1C, 0x1C, 0x38, 0x0F, 0xF0, 0x07, 0xE0
  };

  delay(3000);
  // Display image in the center of the screen
  OLED.clearDisplay();
  // Parameters: bitmap data, x position, y position, width, height, color
  OLED.drawBitmap(
    (SCREEN_WIDTH - 16) / 2,   // Center the image horizontally
    (SCREEN_HEIGHT - 16) / 2,  // Center the image vertically
    smiley_bmp, 16, 16, 1);    // 16x16 image with white pixels
  OLED.display();              // Update display with data

  // Optionally, add a caption
  OLED.setTextSize(1);
  OLED.setCursor(32, 50);
  OLED.println("Bitmap Demo");
  OLED.display();
}

void loop() {
  // put your main code here, to run repeatedly:
}
