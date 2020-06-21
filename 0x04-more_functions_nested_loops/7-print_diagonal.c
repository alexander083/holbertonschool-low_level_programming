#include "holberton.h"
/**
  * print_diagonal - NN
  * @n:interger
  */
void print_diagonal(int n)
{
	int I1 = 0;
	int I2 = -1;

	while (n > I1)
	{
		I2 = 0;
		while (n > I2)
		{
			if (I2 != 0)
				_putchar (32);
			if (I1 == I2)
			{
				_putchar (92);
				I2 = n;
			}
			I2++;
		}
		_putchar (10);
		I1++;
	}
	if (I2 == -1)
		_putchar (10);
}
