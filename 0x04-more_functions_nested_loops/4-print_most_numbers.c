#include "holberton.h"
/**
  * print_most_numbers - Mostrar los numeros de 0 al 9 excluyendo 2 y 4.
  *
  */
void print_most_numbers(void)
{
	char a = 48;

	while (a <= 57)
	{
		if (a != 50 && a != 52)
			_putchar (a);
		a++;
	}
	_putchar (10);
}
