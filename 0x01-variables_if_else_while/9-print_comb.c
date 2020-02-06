#include <stdio.h>
#include <stdlib.h>
/**
*main - print all possible combinations of single-digit number
*Return: 0
*/
int main(void)
{
int i = 0;
while (i < 10)
{
if (i != 9)
{
putchar (i + '0');
putchar (',');
i++;
}
else
{
putchar (i + '0');
i++;
}
}
putchar ('\n');
return (0);
}
