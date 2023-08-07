#include <stdio.h>
#include "main.h"
/**
 * main - a function to print all received argument.
 * @argc: numbers of arguments
 * @argv: arrays of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
