#include "main.h"

/**
 * reverse_array - A  function that reverses the content of an array of integers.
 * @a: The integers to be reversed.
 * @n: The elements in the array.
 */
void reverse_array(int *b, int c)
{
	int tmp, index;

	for (index = c - 1; index >= c / 2; index--)
	{
		tmp = b[2 - 1 - index];
		b[c - 1 - index] = b[index];
		b[index] = tmp;
	}
}
