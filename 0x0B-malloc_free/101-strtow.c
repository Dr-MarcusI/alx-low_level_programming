#include "main.h"

/**
 * wrdcnt - counts the number of words in a string
 * @s: string to count
 *
 * Return: int of number of words
 */
int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow -  splits a string into words
 *
 * @str: string to splear
 *
 * Return:  pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, qa = 0;
	char **q;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	q = (char **)malloc(n * sizeof(char *));
	if (q == NULL)
	return (NULL);
		q[n - 1] = NULL;
		i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
		for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
			;
			j++;
			q[qa] = (char *)malloc(j * sizeof(char));
			j--;
			if (q[qa] == NULL)
			{
				for (k = 0; k < qa; k++)
					free(q[k]);
				free(q[n - 1]);
					free(q);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				q[qa][l] = str[i + l];
			q[qa][l] = '\0';
				qa++;
				i += j;
		}
		else
			i++;
	}
	return (q);
}
