#include "main.h"
/**
 * memset - main entry.
 * @s: A pointer to filled memory.
 * @c: The character of filled memory.
 * @n: The bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
void *_memset(void *s, int c, size_t n);
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
