#include "main.h"

/**
  * _abs - Computes value of  integer.
  * @c: The int to be computed.
  *
  * Return: Absolute value of number, else - 0
  */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
