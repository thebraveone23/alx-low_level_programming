#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int b;

	b = n % 10;
	if (n < 0)
	{
		_putchar(-b + '45');
		return (-b);
	}
	else
	{
		_putchar(b + '45');
		return (b);
	}
}
