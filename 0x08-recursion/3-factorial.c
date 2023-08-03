#include "main.h"

/**
 * factorial - A function that gets factorial of known numbers.
 * @n: numbes to return from
 *
 * Return: factors of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
