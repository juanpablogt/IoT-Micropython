import machine
import time

# Configuracion
pines = [4, 0, 2, 15]
leds = [machine.Pin(pin, machine.Pin.OUT) for pin in pines]

# Codigo Principal
while True:
    for led in leds:
        led.on()
        time.sleep(1)
        led.off()
        time.sleep(1)