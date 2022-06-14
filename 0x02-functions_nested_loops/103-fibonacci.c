/*
*/
#include "main.h"
#include "stdio.h"


int main(void)
{
	int x=1;
	int y;

	while(x <= 4000000)
	{
		y=x;
		x=+y;
	}
	printf(%i,x);
	return (0);
}
