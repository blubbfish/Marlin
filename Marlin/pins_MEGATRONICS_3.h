/**
 * MegaTronics v3.0 pin assignments
 */

#ifndef __AVR_ATmega2560__
  #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
#endif

#define LARGE_FLASH        true

// X-Asis
#define X_STEP_PIN         58   // X axis step (A4) 
#define X_DIR_PIN          57   // X axis direction (A3) 
#define X_ENABLE_PIN       59   // X axis enable (A5) 
#define X_MIN_PIN          37   // X- End stop 
#define X_MAX_PIN          40   // X+ End stop 

// Y-Axis
#define Y_STEP_PIN         5    // Y axis step
#define Y_DIR_PIN          17   // Y axis direction
#define Y_ENABLE_PIN       4    // Y axis enable 
#define Y_MIN_PIN          41   // Y- End stop 
#define Y_MAX_PIN          38   // Y+ End stop 

// Z-Axis 
#define Z_STEP_PIN         16   // Z axis step
#define Z_DIR_PIN          11   // Z axis direction 
#define Z_ENABLE_PIN       3    // Z axis enable 
#define Z_MIN_PIN          18   // Z- End stop
#define Z_MAX_PIN          19   // Z+ End stop

// Extruder 1
#define E0_STEP_PIN        25   // E0 axis step
#define E0_DIR_PIN         24   // E0 axis direction 
#define E0_ENABLE_PIN      26   // E0 axis enable

// Extruder 2 
#define E1_STEP_PIN        22   // E1 axis step 
#define E1_DIR_PIN         60   // E1 axis direction
#define E1_ENABLE_PIN      23   // E1 axis enable

// Extruder 3 
#define E2_STEP_PIN        28   // E2 axis step 
#define E2_DIR_PIN         27   // E2 axis direction (A6)
#define E2_ENABLE_PIN      29   // E2 axis enable 

// Misc
#define SDPOWER            -1   // Not Used      
#define SDSS               53   // SS
#define LED_PIN            13   // Debug LED
#define BEEPER             42   // Speaker (A7)
#define SDCARDDETECT       56	// Megatronics does not use this port, External SD-Adapter

// Fan
#define FAN_PIN             6   // Fan (Objects)
#define FAN2_PIN            7   // Fan (Nozzels)

// Power
#define PS_ON_PIN          12   // Ps-On
#define KILL_PIN           -1   // Not Used

// Extruder Heater
#define HEATER_0_PIN        2   // Extruder 1
#define HEATER_1_PIN        9   // Extruder 2
#define HEATER_2_PIN        8   // Extruder 3

// Bed Heater
#define HEATER_BED_PIN     10   // Heated Bed

#define TEMP_0_PIN   (TEMP_SENSOR_0 == -1 ?   10 : 14) // ANALOG NUMBERING Termisitor 1 (D69) & Termocuple 1 (D65)
#define TEMP_1_PIN   (TEMP_SENSOR_1 == -1 ?    9 : 13) // ANALOG NUMBERING Termisitor 2 (D68) & Termocuple 2 (D64)
#define TEMP_2_PIN   (TEMP_SENSOR_2 == -1 ?    8 : 12) // ANALOG NUMBERING Termisitor 3 (D67) & Termocuple 3 (D63)
#define TEMP_BED_PIN (TEMP_SENSOR_BED == -1 ? 11 : 15) // ANALOG NUMBERING Termisitor 4 (D66) & Termocuple 4 (D62)

// LCD
#define LCD_PINS_RS        32   // LCD RS
#define LCD_PINS_ENABLE    31   // LCD Enable
#define LCD_PINS_D4        14   // LCD 4
#define LCD_PINS_D5        30   // LCD 5
#define LCD_PINS_D6        39   // LCD 6
#define LCD_PINS_D7        15   // LCD 7

// Servo support
#ifdef NUM_SERVOS
  #define SERVO0_PIN       46 //AUX3-6
  #if NUM_SERVOS > 1
    #define SERVO1_PIN     47 //AUX3-5
    #if NUM_SERVOS > 2
      #define SERVO2_PIN   48 //AUX3-4
      #if NUM_SERVOS > 3
        #define SERVO2_PIN 49 //AUX3-3
      #endif
    #endif
  #endif
#endif

// Buttons are directly attached using keypad
#define BTN_EN1            44   // Keypad encoder (2)
#define BTN_EN2            45   // Keypad encoder (1)
#define BTN_ENC            33   // Keypad D33

// Keypad shift Devices
#define SHIFT_CLK          43   // Keypad Shift clock
#define SHIFT_LD           35   // Keypad shift LD
#define SHIFT_OUT          34   // Keypad shift out
#define SHIFT_EN           36   // Keypad D36

// Unknown
#define BLEN_C              2
#define BLEN_B              1
#define BLEN_A              0

// Encoder rotation values
#define encrot0             0
#define encrot1             2
#define encrot2             3
#define encrot3             1
