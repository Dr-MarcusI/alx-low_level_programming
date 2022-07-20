#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 *
 * @s: the pointer of char
 *
 * Return: the 0 value
 */

void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
