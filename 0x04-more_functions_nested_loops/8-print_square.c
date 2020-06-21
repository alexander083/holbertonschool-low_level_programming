#include "holberton.h"
/**
  * print_square - NN
  * @HB:interger
  */

void print_square(int HB)
{
	int H = 0, B = -1;

	while (HB > H)
	{
		B = 0;
		while (HB > B)
		{
			_putchar('#');
			B++;
		}
		_putchar(10);
		H++;
	}
	if (B == -1)
		_putchar(10);
}
