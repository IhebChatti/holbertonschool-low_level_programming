#include <stdio.h>
#include <stdlib.h>
/**
*main - print all possible combinations of two two-digits number
*Return: 0
*/
int main(void)
{
  int i, j, k , l, h, K, m;
for (h = '0'; i <= '9'; i++)
{
for (i = '0'; i <= '9'; i++)
{
k = i;
k++;
}
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
for (l = '0'; l <= '9'; l++)
{
K = l;
K++;
}   
for (m = K; m <= '9'; m++)
{
putchar(l);
putchar(m);
if (!(l == '8' && l == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
