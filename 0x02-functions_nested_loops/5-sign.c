#include "holberton.h"

/**
  * print_sign - Escribe una función que imprima el signo de un número...
  *
  * @n:integer
  * Return: Always 0.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
}
