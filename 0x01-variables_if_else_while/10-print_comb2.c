#include <stdio.h>
#include <stdlib.h>
/**
*main - print all possible combinations of two-digits number
*Return: 0
*/
int main(void)
{
int  i, j;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
putchar(i);
putchar(j);
if (!(i == '9' && j == '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar ('\n');
return (0);
}
