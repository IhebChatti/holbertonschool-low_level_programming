#include "holberton.h"
#include <stdio.h>
/**
*print_diagsums - function to print diagonal sums of matrix
*@a: pointer type int
*@size: int
*Return: void
*/
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

		for (i = 0; i < size; i++)
		{
		sum1 += *(a + i * size + i);
		sum2 += *(a + (i * size) + (size - 1 - i));
		}
	printf("%d, %d\n", sum1, sum2);
}
