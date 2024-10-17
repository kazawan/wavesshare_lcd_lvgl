// See SetupX_Template.h for all options available
#define USER_SETUP_ID 303
#define USER_SETUP_INFO "ESP32-S3-Touch-LCD-2.8"

// #define ESP32 1
// #define CONFIG_IDF_TARGET_ESP32S3 1E



#define ST7789_3_DRIVER

#define TFT_WIDTH  240
#define TFT_HEIGHT 320

#define TFT_MISO 46
#define TFT_MOSI 45
#define TFT_SCLK 40
#define TFT_CS   42  // Chip select control pin
#define TFT_DC   41  // Data Command control pin
#define TFT_RST  39
#define TFT_BL	5
#define TFT_BACKLIGHT_ON HIGH

#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts
#define SMOOTH_FONT


#define SPI_FREQUENCY  80000000

#define ESP32_DMA

// #define CGRAM_OFFSET      // Library will add offsets required

// #define SPI_READ_FREQUENCY  20000000

// #define SPI_TOUCH_FREQUENCY  2500000

// #define SUPPORT_TRANSACTIONS