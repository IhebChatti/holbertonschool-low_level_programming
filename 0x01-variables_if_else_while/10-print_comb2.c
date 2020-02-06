#include <stdio.h>
#include <stdlib.h>
/**
*main - print all possible combinations of single-digit number
*Return: 0
*/
int main(void)
{
int i;
for (i = 0; i < 100; i++)
{
putchar ((i / 10) + '0');
putchar ((i % 10) + '0');
putchar (',');
putchar (' ');
}
putchar ('\n');
return (0);
}
