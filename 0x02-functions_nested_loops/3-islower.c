#include <holberton.h>
/**
*_islower - checkes if character is lowercase
*Return: 0
*/
int _islower(int c)
{
	if (islower(c) == 1)
		return (1);
	else
		return (0);
}
