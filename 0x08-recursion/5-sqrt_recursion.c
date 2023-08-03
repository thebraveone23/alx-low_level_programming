#include "main.h"

/**
 * sqrt2 - returns natural squares to the root of a given number.
 * @a: number used to calculate square root.
 * @b: number that iterates from 1 to n
 *
 * Return: to resulting square root.
 */
int sqrt2(int a, int d)
{
	if (d * d == a)
		return (d);
	else if (d * d > a)
		return (-1);
	return (sqrt2(a, d + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
