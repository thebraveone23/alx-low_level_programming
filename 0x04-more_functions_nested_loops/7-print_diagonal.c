#include "main.h"

/**
 * Main - a grogram that print_diagonal
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
 */

void print_diagonal(int w)
{
	int c, i;

	c = 0;

	while (w > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		w--;
	}
	if (c < 1)
		_putchar('\n');
}
