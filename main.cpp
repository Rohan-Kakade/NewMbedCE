#include "mbed.h"

DigitalOut led(LED1);
DigitalIn button(BUTTON1, PullUp);

int main()
{
	printf("Blank project: NEW Mbed CE says hi again! \n");
	thread_sleep_for(150);

	while(true)
	{
		
	}

}