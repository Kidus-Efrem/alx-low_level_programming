#include "main.h"
/**
 *prints last digit of a number
 */
int l;
int print_last_digit(int i)
{
	if (i<100)
		l=i%10;
	else if (i<1000)
		l=i%100;
	else if (i<10000)
		l=i%1000;
	return (i);

}