#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: An array of integers
 * @n: Number of elements to swap
 *
 * Return: empty.
 */
void reverse_array(int *a, int n)
{
	int *d, i, aux, k;

	d = a;

	for (i = 1; i < n; i++)
	{
		d++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *d;
		*d = aux;
		d--;
	}
}
