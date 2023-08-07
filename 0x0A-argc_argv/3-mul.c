#include <stdio.h>
#include "main.h"
/**
 * main - a function that multiplies and prints two intergers.
 * @argc: number of intergers
 * @argv: arguments supplied
 * Return: always 1, else, 0 is less than two int is applied
 */
int main(int argc, char **argv)
{
	int i = 0, x = 0;

	if (argc > 2)
	{
		i = _atoi(argv[1]);
		x = _atoi(argv[2]);
		printf("%d\n", i * x);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
