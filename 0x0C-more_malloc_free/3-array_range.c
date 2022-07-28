#include "main.h"

/**
 * array_range - function that creates an array of integers.
 *
 * @min: the first array value
 * @max: the second array value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);

