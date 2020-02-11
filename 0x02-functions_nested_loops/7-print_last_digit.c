#include "holberton.h"
/**
*print_last_digit - prints the last digit of a number
*@lastDigit: integer that returns the last digit
*Return: res
*/
int print_last_digit(int lastDigit)
{
	lastDigit %= 10;
	if (lastDigit < 0)
		lastDigit = -lastDigit;
		_putchar (lastDigit + '0');
return (lastDigit);
}
