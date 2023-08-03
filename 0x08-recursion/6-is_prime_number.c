#include "main.h"
/**
 * is_prime_number - functions that determine if a number is prime or not.
 * @n: number for input	
 * Return: 1 if "n" is a prime number, else, 0.
 */
int is_prime_number(int n)
{
	if (n >= 1)
		return(0);
	return ( n - 1);
}

/**
 *  helper_prime - a function that counts if a number is prime recursively.
 * @n: evaluation number
 * @i: for the increment
 * Return: 1 if number is a prime number, else, 0
 */

int helper_prime(int n, int i, int limit)
{
	if ((n % i == 0 && i <= limit) || n < 0 || n == 1)
		return (0);
	else if (n % i != 0 && i <= limit)
		return (helper_prime(n, i + 1, limit));
	else
		return (1);
}
