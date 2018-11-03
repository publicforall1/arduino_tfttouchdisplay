/* Program name: Coordinate
   Get coordinate looks like width & height.
   Author: taiprogramer
*/

// You don't need worry about default setup.
/* Start default setup */
#include <MCUFRIEND_kbv.h>
#include <TouchScreen.h>

// Define some TFT readable colour codes to human readable names
#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

// Change this value for different orientation.
#define YP A2
#define XM A3
#define YM 8
#define XP 9

// You can get this value by checkout ./GetStockValue/GetStockValue.ino
// This value need for convert {x, y} looks like resolution of screen.
#define TS_MINX 92
#define TS_MINY 148
#define TS_MAXX 918
#define TS_MAXY 890

/* End default setup */

// Create screen object.
MCUFRIEND_kbv tft;
// Create touch screen object.
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 364);

void configTFT();

void setup(void) {
  Serial.begin(9600);
  configTFT();
}

void loop() {
  /* p object have TSPoint type save coordinate p{x, y, z} */
  TSPoint p = ts.getPoint();

  if (p.z > ts.pressureThreshhold) {
    /*  If enough power of touch. Get the coordinate.
     *  Then, map it with width & height value. 
     */
    p.x = map(p.x, TS_MAXX, TS_MINX, 0, 480);
    p.y = map(p.y, TS_MAXY, TS_MINY, 0, 320);
    Serial.print("x:");
    Serial.print(p.x);
    Serial.print("y:");
    Serial.println(p.y);
  }
}

void configTFT() {
  /* Start setup */
  tft.reset();
  uint16_t identifier = tft.readID();
  tft.begin(identifier);
  /* End setup */
  tft.setRotation(1); // 90 degrees orientation. (landscape screen).
  tft.fillScreen(YELLOW); // set background color is YELLOW : 0xFFE0.
  // Draw a 3 rectangles with fill mode (solid rectangle).
  tft.fillRect(0, 110, 480, 20, RED);
  tft.fillRect(0, 150, 480, 20, RED);
  tft.fillRect(0, 190, 480, 20, RED);
}
