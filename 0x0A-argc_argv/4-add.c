#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - s function that  adds numbers
 * @argc: number of arguments
 * @argv: arguments being passed
 * Return: Always 0 or 1
 */
int main(int argc, char **argv)
{
	int i, b, addition;

	for (i = 1; i < argc; i++)
	{
		for (b = 0; argv[i][b] != '\0'; b++)
		{
			if (!isdigit(argv[i][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		addition = addition + atoi(argv[i]);
	}
	printf("%i\n", addition);
	return (0);
}
