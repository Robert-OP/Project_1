import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)
GPIO.setup(11, GPIO.OUT)

# led blink function
def blink(pin):
	GPIO.output(pin, GPIO.HIGH)
	time.sleep(1)
	GPIO.output(pin, GPIO.LOW)
	time.sleep(1)
	return

# blink led i=10 times
for i in range(0,10):
	blink(11)

GPIO.cleanup()
