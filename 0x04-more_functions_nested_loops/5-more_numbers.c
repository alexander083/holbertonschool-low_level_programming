#include "holberton.h"
/**
  * more_numbers- Mostrar los numeros de 0 al 9 excluyendo 2 y 4.
  *
  */
void more_numbers(void)
{
	char a, b;
	int B, R;

	for (R = 0; R <= 9; R++)
	{
		a = 48;
		b = 0;
		B = 0;
		while (a <= 57 && b <= 4)
		{
			if (B)
			{
				_putchar ('1');
				b++;
			}
			_putchar (a);
			if (a == 57)
			{
				a = 48;
				B = 1;
			}
			else
			{
				a++;
			}
		}
		_putchar (10);
	}
}
