#include "main.h"
#include <stdio.h>
/*
*main - Print _putchar
*
*Return: Always (0)
*/
int main()
{
    char *ch = "_putchar";
    int i;
    char s = '\n';

    for (i = 0; i < 8; i++)
         putchar(ch[i]);
    putchar (s);
    return (0);
}