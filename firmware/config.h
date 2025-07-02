//
// Created by Michael Bui on 03 Jul 2025.
//

#ifndef CONFIG_H
#define CONFIG_H

#define MATRIX_ROWS 3
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { GP3, GP4, GP2 }
#define MATRIX_COL_PINS { GP26, GP27, GP28, GP29 }

#define WS2812_DI_PIN GP0
#define RGBLIGHT_LED_COUNT 12

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7

#endif //CONFIG_H
