#include <stdio.h>
#include <stdlib.h>
/**
*main - print all possible combinations of two-digits number
*Return: 0
*/
int main(void)
{
int  i, j, k;
for (i = '0'; i <= '9'; i++)
{
k = i;
k++;
for (j = k; j <= '9'; j++)
{
putchar(i);
putchar(j);
if (!(i == '8' && j == '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar ('\n');
return (0);
}
