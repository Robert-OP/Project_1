#include <wiringPi.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	//initialize wiringPi library
	wiringPiSetup();

	//set LED pin 13 as output
	const int wpin = 2;
	pinMode(wpin, OUTPUT);

	//blink led i=10 times
	int i;
	for(i=1; i<=10; i++){
		digitalWrite(wpin, HIGH);
		printf("high %d \n", i);
		delay(500);
		digitalWrite(wpin, LOW);
		printf("low %d \n", i);
		delay(500);
	}

	//clean gpio
	digitalWrite(wpin, 0);
	pinMode(wpin, 0);

	return 0;
}
