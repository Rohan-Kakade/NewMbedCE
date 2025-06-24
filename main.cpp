#include "mbed.h"

DigitalOut led(LED1);
DigitalIn button(BUTTON1, PullUp);

int main()
{
	printf("Blank project: NEW Hello world from Mbed CE! \n");
	thread_sleep_for(150);

	while(true)
	{
		
	}

}