from machine import Pin
import time

entrada = Pin(15, Pin.IN, Pin.PULL_UP)
led_interno = Pin(2, Pin.OUT)

estado_anterior = 1  # Botón no presionado

while True:
    estado_actual = entrada.value()
    
    # Solo procesa si CAMBIÓ
    if estado_actual != estado_anterior:
        if estado_actual == 0:
            led_interno.on()
            print("EVENTO: Botón presionado")
            # AQUÍ guardar en archivo
        else:
            led_interno.off()
            print("EVENTO: Botón soltado")
            # AQUÍ guardar en archivo
        
        estado_anterior = estado_actual
    
    time.sleep_ms(100)
