#include "main.h"

/**
 * find_multipliers - look for multipliers of n.
 * @n: base number.
 * @i: iterator number.
 * Return: 1 if n is prime, 0 otherwise.
 */
int find_multipliers(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (find_multipliers(n, i + 1));
}
/**
 * is_prime_number - check if n is prime
 * @n: base number.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (find_multipliers(n, 2));
}
