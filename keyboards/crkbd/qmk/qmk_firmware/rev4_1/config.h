#pragma once

#define SERIAL_USART_TX_PIN GP12
#define USB_VBUS_PIN GP13
#define SPLIT_HAND_PIN GP21

#define I2C_DRIVER I2CD1
#define OLED_UPDATE_INTERVAL 50
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7

#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define USB_SUSPEND_WAKEUP_DELAY 200

/* RP2040- and hardware-specific config */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
#define PICO_XOSC_STARTUP_DELAY_MULTIPLIER 64

#define DYNAMIC_KEYMAP_LAYER_COUNT 16
