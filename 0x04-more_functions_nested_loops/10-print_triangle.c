#include "holberton.h"
/**
  * print_triangle - check the code for Holberton School students.
  *
  * @T:interger
  */

void print_triangle(int T)
{
	int A = 0, B = -1;

	while (A < T)
	{
		B = 0;
		while (B < T)
		{
			if ((B + 1) < (T - A))
				_putchar(' ');
			else
				_putchar('#');
			B++;
		}
		_putchar(10);
		A++;
	}
	if (B == -1)
		_putchar(10);
}
