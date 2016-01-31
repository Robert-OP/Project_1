# LED PWM

import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)
GPIO.setup(11, GPIO.OUT)

led = GPIO.PWM(11, 0.5)
led.start(1)
input('Press return to stop!')
led.stop()
GPIO.cleanup()

# To change brightness 0->100
#led.ChangeDutyCycle(75)

# Frequency of PWM signal
#led.ChangeFrequency(1000)
 
