#include <REGX52.H>

void Delay(unsigned int x)
{
	unsigned char i, j;
	while(x)
	{
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		x--;
	}
}
	


char LEDNum;
void main()
{
	P2 = ~0x01;
	while(1)
	{
			if(P3_1 == 0)
			{
				Delay(20);
				while(P3_1 == 0);
				Delay(20);
				LEDNum++;
				P2 = ~( 0x01<<LEDNum%8 );				
			}
			if(P3_0 == 0)
			{
				Delay(20);
				while(P3_0 == 0);
				Delay(20);
				
				LEDNum--;	
				P2 = ~( 0x01<<LEDNum%8 );				
			}
				
				
	}
}
