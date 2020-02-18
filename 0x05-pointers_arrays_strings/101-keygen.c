#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
*main - a program to generates a password
*Return: 0
*/
int main(void)
{
	srand((unsignned int) (time(null)));
	int i;
	char pw[10];

	for (i = 0; i <= 12; i++)
	{
		pw[i] = 33 + rand() % 94;	
	}
	pw[i] = '\0';
	printf("%s\n", pw);
	return (0);
}
