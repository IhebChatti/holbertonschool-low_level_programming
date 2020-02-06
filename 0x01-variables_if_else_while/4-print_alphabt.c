#include <stdio.h>
#include <stdlib.h>
/**
*main - writing the alphabet using putchar (q, e exluded)
*Return: 0
*/
int main(void)
{
char c = 'a';
while (c > 'z')
{
if (c == 'e')
{
c++;
}
else if (c == 'q')
{
c++;
}
else
{
putchar (c);
c++;
}
}
putchar ('\n');
return (0);
}
