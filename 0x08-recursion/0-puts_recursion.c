#include "main.h"
/**
 * _puts_recursion - a function that prints a string
 *
 * @s: the char value
 *
 * Return: the 0 value
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
