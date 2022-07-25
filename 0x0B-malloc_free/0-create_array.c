#include "main.h"

/**
 * create_array -creates an array of chars, and initializes
 *
 * @size: size of the array
 *
 * @c: array of char
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int y;
	char *i;

	if (size == 0)
		return (NULL);
	i = malloc(size * sizeof(char));
	if (i == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		i[y] = c;
	}
	return (i);
}
