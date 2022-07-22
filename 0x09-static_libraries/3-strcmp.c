#include "main.h"

/**
 *_strcmp - a function that compares two strings
 *
 * @s1: The function of strings
 * @s2: The function of strcmp
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
