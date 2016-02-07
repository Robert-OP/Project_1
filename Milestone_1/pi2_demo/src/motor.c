
#include <wiringPi.h>
#include <softPwm.h>
#include <stdio.h>
void motor(void);

#define MOTOR 18
#define LED 17

int main(void){

	//setup using broadcom pin numbers
	wiringPiSetupGpio();

	pinMode(LED, PWM_OUTPUT);
	pinMode(MOTOR, OUTPUT);
	printf("In progress...\n");

	motor();

	return 0;
}

void motor(void){
	softPwmCreate(MOTOR, 0, 100);
	softPwmWrite(MOTOR, 10);
	pwmWrite(LED, 1);
	printf("Opening...\n");
	delay(1000);

	softPwmWrite(MOTOR, 0);
	printf("Open\n");
	delay(5000);

	softPwmWrite(MOTOR, 30);
	printf("Closing...\n");
	delay(1000);

	printf("Close\n");
	softPwmWrite(MOTOR, 0);
	pwmWrite(LED, 0);
}
