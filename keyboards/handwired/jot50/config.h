#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Jotix
#define PRODUCT         Jot50
#define DESCRIPTION     A 5x12 compact ortholinear keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

/* pro_micro pin-out */
#define MATRIX_COL_PINS { A4, B0, B1, B2, B3 }
#define MATRIX_ROW_PINS { B4, B5, B6, B7, B9, B15, B14, B13, B8, A0, A1, A2 }
#define UNUSED_PINS

#define AUTO_SHIFT_TIMEOUT 150
#define FORCE_NKRO

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

