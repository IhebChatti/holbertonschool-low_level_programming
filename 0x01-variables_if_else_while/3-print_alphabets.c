#include <stdio.h>
#include <stdlib.h>
/**
*main - print the alphabets in lowercase then UPPERCASE
*Return: 0
*/
int main(void)
{
char l, u;
l = 'a';
u = 'A';
while (l <= 'z')
{
putchar (l);
l++;
}
while (u <= 'Z')
{
putchar (u);
u++;
}
putchar ('\n');
return (0);
}
