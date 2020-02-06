#include <stdio.h>
#include <stdlib.h>
/**
*main - writing the alphabet using puts
*Return: 0
*/
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
