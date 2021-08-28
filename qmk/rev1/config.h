#pragma once


/* USB Device descriptor parameter */
#define VENDOR_ID       0x0000
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    perce
#define PRODUCT         tapir36

#define MATRIX_ROWS 8
#define MATRIX_COLS 5

// wiring
#define MATRIX_ROW_PINS { F6, F7, B1, B3 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4 }
#define MATRIX_ROW_PINS_RIGHT { F6, F7, B1, B3 }
#define MATRIX_COL_PINS_RIGHT { B4, E6, D7, C6, D4 }

#define SOFT_SERIAL_PIN D2
#define SPLIT_USB_DETECT

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define RGB_DI_PIN F4
#define RGBLED_NUM 6
#define RGBLED_SPLIT {3,3}
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_LIMIT_VAL 128
