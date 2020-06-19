#include "holberton.h"
/**
  * jack_bauer - check the code for Holberton School students.
  *
  * Return: Always 0.
  */
void jack_bauer(void)
{
	int H = 0, M;

	while (H <= 23)
	{
		M = 0;
		while (M <= 59)
		{
			_putchar (H / 10 + '0');
			_putchar (H % 10 + '0');
			_putchar (':');
			_putchar (M / 10 + '0');
			_putchar (M % 10 + '0');
			_putchar (10);
			M++;
		}
		H++;
	}
}
