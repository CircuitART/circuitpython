// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2021 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#define MICROPY_HW_BOARD_NAME "CircuitArt Zero 2350W"
#define MICROPY_HW_MCU_NAME "rp2350b"

#define MICROPY_HW_NEOPIXEL (&pin_GPIO30)

#define DEFAULT_I2C_BUS_SCL (&pin_GPIO3)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO2)

#define DEFAULT_SPI_BUS_SCK (&pin_GPIO6)
#define DEFAULT_SPI_BUS_MOSI (&pin_GPIO7)
#define DEFAULT_SPI_BUS_MISO (&pin_GPIO4)

#define DEFAULT_UART_BUS_RX (&pin_GPIO1)
#define DEFAULT_UART_BUS_TX (&pin_GPIO0)

#define CIRCUITPY_PSRAM_CHIP_SELECT (&pin_GPIO8)
