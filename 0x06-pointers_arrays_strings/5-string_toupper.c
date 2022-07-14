#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  *
  * @p: String to return
  *
  * Return: String
  */

	char *string_toupper(char *p)
	{

		int i;

		for (i = 0; p[i] != '\0'; i++)
		{

			if (p[i] >= 97 && p[i] <= 122)
			{
				p[i] = p[i] - 32;
			}

	}

	return (p);
}
