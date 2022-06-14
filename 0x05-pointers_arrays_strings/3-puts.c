#include "main.h"
#include <stdio.h>
/**
 * _puts - prints output to stdout
 * @str: string to output
 * Description - prints text to stdout
*/
/*void _puts(char str[])
 {
 	int x;

 	for (x = 0; str[x] != '\0'; x++)
 		putchar(str[x]);
 	putchar('\n');
 }*/
int main(void){
	char name[]="kidus";
	int size=sizeof(name)/sizeof(name[0]);
	for(int x=0;name[x]!='\0';x++)
		printf("%c",name[size-x-1]);


	return 0;

}