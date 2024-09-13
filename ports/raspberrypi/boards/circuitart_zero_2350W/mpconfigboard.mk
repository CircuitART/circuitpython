USB_VID = 0x1209
USB_PID = 0x2350
USB_PRODUCT = "CircuitArt Zero 2350W"
USB_MANUFACTURER = "CircuitArt"

CHIP_VARIANT = RP2350
CHIP_PACKAGE = B
CHIP_FAMILY = rp2

EXTERNAL_FLASH_DEVICES = "W25Q128JVxM"


CIRCUITPY__EVE = 1
CIRCUITPY_ALARM = 0
CIRCUITPY_PICODVI = 1
CIRCUITPY_USB_HOST = 0

# Include these Python libraries in firmware.
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_NeoPixel
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_ST7789
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_AHTx0
