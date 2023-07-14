#include<stdio.h>

/**
 * main - A program that print 0-9
 *
 * Return: 0
 */
int main(void)
{
	int b;
	
	b = 0;
	while (b < 10){
		putchar(b + '0');
		b++;
	}
	putchar('\n');
	return (0);
}
