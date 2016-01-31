/*Raspberry Pi 2 application to control a servo motor
to open a food dispenser and signaling it with a LED*/
#include <wiringPi.h>
#include <softPwm.h>
#include <stdio.h>
void motor(void);

//define gpio pins
#define MOTOR 18
#define LED 17

int main(void){

	//setup using broadcom gpio pin numbers
	wiringPiSetupGpio();
	
	//set pins as pwm output
	pinMode(MOTOR, OUTPUT);
	pinMode(LED, OUTPUT);

	motor();

	return 0;
}

void motor(void){
	digitalWrite(LED, HIGH);		//LED on (signal opening)
	softPwmCreate(MOTOR, 0, 100);	//create a software pwm
	softPwmWrite(MOTOR, 10);		//motor moves left (open)
	printf("Opening...\n");
	delay(1000);					//for 1 second
	
	softPwmWrite(MOTOR, 0);			//motor stops
	printf("Open\n");
	delay(5000);					//for 5 seconds
	
	softPwmWrite(MOTOR, 30);		//motor moves right (close)
	printf("Closing...\n");
	delay(1000);					//for 1 second
		
	printf("Close\n");
	softPwmWrite(MOTOR, 0);			//motor stops again
	digitalWrite(LED, LOW);			//LED off
}
