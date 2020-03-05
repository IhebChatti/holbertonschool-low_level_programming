#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*@argc: counter
*@argv: vector
*Return: 0
*/
int main(int argc, char *argv[])
{
	unsigned int num1, num2, mul;
	int i, j, l1, l2;

	for (i = 0; i <= argc; i++)
	{
		for (j = 0; argv[1] != '\0'; j++)
			l1++;
		for (j = 0; argv[2] != '\0'; j++)
			l2++;
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (argc < 2)
	{
		printf("Error\n");
		exit(98);
	}
	mul = num1 * num2;
	printf("%u\n", mul);
	return (0);
}
