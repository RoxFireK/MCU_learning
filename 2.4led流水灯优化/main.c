#include <REGX52.H>

void Delay1ms(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;
	while(xms)
	{
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}

void main()
{
	while(1)
	{
		P2 = 0xFE;
		Delay1ms(1000);//1111 1110
		P2 = 0xFD;
		Delay1ms(1000);//1111 1101
		P2 = 0xFB;
		Delay1ms(100);//1111 1011
		P2 = 0xF7;
		Delay1ms(100);//1111 0111
		P2 = 0xEF;
		Delay1ms(100);//1110 1111
		P2 = 0xDF;
		Delay1ms(100);//1101 1111
		P2 = 0xBF;
		Delay1ms(100);//1011 1111
		P2 = 0x7F;
		Delay1ms(100);//0111 1111		
	}
	
}