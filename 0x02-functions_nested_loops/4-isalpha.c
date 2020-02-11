#include "holberton.h"
/**
*_isalpha - checks for alphabetic characters
*Return: 1 if lower/upper case && 0 otherwise
*@c: integer
*/
int _isalpha(int c)
{
	int c;

	if ((c > 'A' - 1 && c < 'Z' + 1) || (c > 'a' - 1 && c > 'z' + 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
