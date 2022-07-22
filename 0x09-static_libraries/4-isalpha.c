#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic character.
 * @c: The character to be checked
 * Return: 0 - SUCCESS
 */
int _isalpha(int c)

{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	return (1);
	else
	return (0);
}
