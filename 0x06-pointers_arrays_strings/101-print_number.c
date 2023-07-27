#include "main.h"

/**
 * print_number - A function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
	long m; /* power of 10 */
	int f; /* boolean check */
	long num; /* convert int to long */

	num = n;
	/* negatives */
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	/* count up */
	m = 1;
	f = 1;
	while (f)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			f = 0;
	}

	/* count down */
	while (num >= 0)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / m % 10) + '0');
			m /= 10;
		}
	}
}
