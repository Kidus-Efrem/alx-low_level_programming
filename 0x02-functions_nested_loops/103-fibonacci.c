/*
*/
#include "main.h"


int main(void)
{
	int x=1;
	int y;

	while(x <= 4,000,000)
	{
		y=x;
		x=+y;
		_putchar(x);
	}
	return (0);
}
