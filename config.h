#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#define RGB_MATRIX_KEYPRESSES

// Enable Suspend Sleep Mode RGB
#undef RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_DISABLE_WHEN_USB_SUSPENDED true

// Tweak Modes
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 15
#define RGBLIGHT_VAL_STEP 15
#define RGBLIGHT_LIMIT_VAL 215


#endif
