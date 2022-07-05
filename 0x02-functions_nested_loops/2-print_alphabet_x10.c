/*
*File: alphabet ten times
*Auth: Dr Marcus IMAGWE
*/

#include "main.h"

/**
 *print_alphabet_x10 - print alphabet 10 times, in lowercase.
*/

void print_alphabet_x10(void)
{
	int coun = 0;
	char alpha;

	while (coun++ <= 9)
	{
		for (alpha = 97; alpha <= 122; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
