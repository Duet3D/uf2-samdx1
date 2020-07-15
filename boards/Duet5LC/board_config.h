#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Duet3D"
#define PRODUCT_NAME "Duet3-Mini5+"
#define VOLUME_LABEL "DuetBOOT"
#define INDEX_URL "https://www.duet3d.com"
#define BOARD_ID "Duet3-Mini5+"

#define USB_VID 0x239A
#define USB_PID 0x00B5

#define LED_PIN PIN_PA31
#define LED_ACTIVE_LOW

#define BOARD_NEOPIXEL_PIN PIN_PC24
#define BOARD_NEOPIXEL_COUNT 0

#define BOOT_USART_MODULE                 SERCOM2
#define BOOT_USART_MASK                   APBBMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBBMASK_SERCOM2
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PB24D_SERCOM2_PAD1
#define BOOT_USART_PAD0                   PINMUX_PB25D_SERCOM2_PAD0
#define BOOT_GCLK_ID_CORE                 SERCOM2_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM2_GCLK_ID_SLOW

#endif
