#include "main.h"

/**
 * main entry print rev
 * @a: 1st argument char type
 *
 * Return: Always 0
 */
void print_rev(char *a)
{
	int i = 0;

	while (*(a + i) != '\0')
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	};
	_putchar('\n');
}
