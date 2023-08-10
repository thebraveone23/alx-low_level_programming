#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that returns a pointer to a newly allocated space in memory.
 * @size: size of the array.
 * @c: char to assign.
 * Return: pointer to array NULL, if fail.
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
