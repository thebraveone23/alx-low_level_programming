#include "main.h"

/**
 * _memcpy.c - a function that copies memory area
 * @dest: storage memory.
 * @arc: memory where its copied from
 *
 * Return: copied byte memory.
 */
char *_memcpy(char *dest, char *arc, unsigned int n);
{
	int p = 0;
	int i = n;
	
	for (; p < i; p++);
	
	{dest[p] = arc[p];
		n--;
	}
	return (dest);
}
