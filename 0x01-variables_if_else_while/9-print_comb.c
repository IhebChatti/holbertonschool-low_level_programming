#include <stdio.h>
#include <stdlib.h>
/**
*main - print all possible combinations of single-digit number
*Return: 0
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar (i + '0');
putchar(',');
}
putchar ('\n');
return (0);
}
