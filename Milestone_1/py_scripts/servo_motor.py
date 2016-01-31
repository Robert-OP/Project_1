# SERVO MOTOR

import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)
GPIO.setup(12, GPIO.OUT)

# 180degrees motor
motor = GPIO.PWM(12,50)

# open dispenser
motor.start(2.5)
time.sleep(5)
# close dispenser
motor.start(11)
time.sleep(1)
motor.stop()

GPIO.cleanup()
