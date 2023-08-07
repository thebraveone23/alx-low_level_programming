#include <stdio.h>
#include "main.h"
/**
 * main - this function prints the number of an argument.
 * @argc: number of argument.
 * @argv: arguments passed here.
 *
 * Return: Always 0 (success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
