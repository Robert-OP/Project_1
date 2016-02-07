
#include <wiringPi.h>
#include <softPwm.h>
#include <stdio.h>
void motor(void);

#define MOTOR 18
#define LED 17

int main(void){

	//setup using broadcom pin numbers
	wiringPiSetupGpio();

	pinMode(LED, OUTPUT);
	pinMode(MOTOR, OUTPUT);
	printf("Shutdown\n");
	softPwmWrite(MOTOR, 0);
	digitalWrite(LED, LOW);

	return 0;
}
