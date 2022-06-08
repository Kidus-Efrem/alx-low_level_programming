#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: the character in ASCII
 * Return : 1 if c is lowercase and 0 if not
 */

int _islower(int c)
{
if (c > 97)
	return (1);

else
	return (0);
_putchar('\n');
}
