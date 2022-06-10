#include <stdio.h>

/**
 * main - main block, solve fizz buzz from numbers 1 to 100
 * Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz.
 * Multiples of both 3 and 5 should print FizzBuzz.
 * Return: 0
 */
int main(void)
{
	

int i=100;
int x=1;
while (i>=x){
	if (x%3==0 && x%5==0){
		printf("FIZZBUZZ\n");
	 }
	else if (x%3==0){
		printf("FUZZ\n");
	}
	else if(x%5==0) {
		printf("BUZZ\n");
	}
	else
	{printf("%d\n",x);}
	x++;
}


	return (0);
}
