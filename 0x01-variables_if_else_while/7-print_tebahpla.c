#include<stdio.h>

/**
 * main - A program that print the alphabet in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char b;

	b = 'z';

	while
		(b >= 'a'){
		putchar(b);
		b--;
	}
	putchar('\n');
	return (0);
}
