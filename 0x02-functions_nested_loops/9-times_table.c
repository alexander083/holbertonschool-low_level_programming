#include "holberton.h"
/**
  * times_table - check the code for Holberton School students.
  *
  * Return: Always 0.
  */
void times_table(void)
{
	int C = 0, F;
	
	while (C <= 9)
	{
		F = 0;
		while (F <= 9)
		{
			int X = C * F;
			if (X < 10)
			{
				if (F > 0)
				{
					_putchar (' ');
					_putchar (' ');
				}
				_putchar (X % 10 + '0');
			}
			else
			{
				_putchar (' ');
				_putchar (X / 10 + '0');
				_putchar (X % 10 + '0');
			}
			if(F != 9)
				_putchar (',');
			F++;
		}
		_putchar (10);
		C++;
	}
}
