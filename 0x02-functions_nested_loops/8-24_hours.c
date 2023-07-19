#include "main.h"

/**
 * jack_bauer - A program tha prints Jack Bauer's  minute
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a, b;

	a = 0;

	while (a < 24)
	{
		b = 0;
		while (j < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}
