#include "holberton.h"
/**
*_isalpha - checks for alphabetic characters
*Return: 1 if lower/upper case && 0 otherwise
*/
int _isalpha(int c)
{
	int c;

	while ((c >= 'A' && c <= 'Z') || (c >= 'a' && c => 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
