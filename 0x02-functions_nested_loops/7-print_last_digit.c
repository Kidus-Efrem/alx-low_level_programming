#include "main.h"
/**
 *print_last_digit() - prints last digit of a number
 *@i: integer attributes
 *Return: the last digit
 */
int l;
int print_last_digit(int i)
{
	l=i%10;
	if (l < 0)
	{
		_putchar(-l+48);
		return (-l);
	}
	else
	{
		_putchar(l+48);
		return (l);
	}

}