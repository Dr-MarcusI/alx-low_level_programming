#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int i;

	while (src[n] != '\0')
	{
		n++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
