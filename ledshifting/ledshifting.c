/*
 * ledshifting.c
 *
 * Created: 1/31/2018 10:45:57 AM
 *  Author: ADITYA
 */ 


#include <avr/io.h>
//#define F_CPU 1000000UL
#include <util/delay.h>

void shift(char num)
{
	DDRB=0xff;
	if(num==0)
	{
		
		while(1)
		{
			for (char i=0;i<8;i++)
			{
				PORTB=0x01<<i;
				_delay_ms(500);
			}
		}
	}
	else
		for(char j=0;j<num;j++)
		for (char i=0;i<9;i++)
		{
			PORTB=0x01<<i;
			_delay_ms(500);
		}
	
}
int main(void)
{
	char choice=1; //0 for infinite execution
    shift(choice);

}