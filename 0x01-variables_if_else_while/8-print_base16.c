#include<stdio.h>

/**
 * main - A program that print base 16 numbers
 * *
 * Return: Always 0 (success)
 */
int main(void)
{
	char b;
	
	char c;
	
	b = 'a';
	c = 0;
	while
		(c < 10)
	{
		putchar(c + '0');
		c++;
	}
	while
		(b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
