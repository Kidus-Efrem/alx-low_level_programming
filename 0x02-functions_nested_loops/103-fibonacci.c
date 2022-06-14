/*
*/
#include "main.h"



int main(void)
{
	int x=1;
	int y;

	while(x <= 4000000)
	{
		y=x;
		x=+y;
	}
	putchar(x);
	return (0);
}
