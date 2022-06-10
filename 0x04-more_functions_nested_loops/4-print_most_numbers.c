#include "main.h"
/**
 * print_most_numbers - prints numbers leaving 2 and 4
 * Description: prints 0-9 expect numbers 2 and 4
*/
#include <stdio.h>
void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		if (n != 2 && n != 4)
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
}

int main(void){
    print_most_numbers();
	putchar(95);
	return 0;
}