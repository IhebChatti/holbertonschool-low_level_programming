#include "holberton.h"
/**
*_islower - checkes if character is lowercase
*@c: integer to return the lowercase char
*Return: 1 if c is lowercase && 0 otherwise
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
