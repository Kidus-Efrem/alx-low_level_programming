#include "main.h"
/**
 * _abs - computes absolute value of an integer
 *Return: abs
 */

int _abs(int i)
{
	if ((i > 0) || (i==0))
	{
		return (i);
	}
	else
	{
		return (-i);
	}
	_putchar('\n');
}
