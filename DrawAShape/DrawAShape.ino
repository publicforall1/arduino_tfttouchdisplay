/* Program name: Draw a shape
 * 
 *  
 *  
 * Author: taiprogramer 
 */

// You don't need worry about default setup.
/* Start default setup */
#include <MCUFRIEND_kbv.h>

// Define some TFT readable colour codes to human readable names
#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF
/* End default setup */

// Create screen object.
MCUFRIEND_kbv tft;

void configTFT();

void setup(void) {
  configTFT();
}

void loop(){
    // Draw a 3 rectangles with fill mode (solid rectangle).
    tft.fillRect(0, 110, 480, 20, RED);
    tft.fillRect(0, 150, 480, 20, RED);
    tft.fillRect(0, 190, 480, 20, RED);
}

void configTFT(){
  /* Start setup */
  tft.reset();
  uint16_t identifier = tft.readID();
  tft.begin(identifier);
  /* End setup */
  tft.setRotation(1); // 90 degrees orientation. (landscape screen).
  tft.fillScreen(YELLOW); // set background color is YELLOW : 0xFFE0.
}
