#include "holberton.h"
/**
  * print_line- Mostrar los numeros de 0 al 9 excluyendo 2 y 4.
  * @n:interger
  */
void print_line(int n)
{
	int I = 0;

	while (n > I)
	{
		_putchar ('_');
		I++;
	}
	_putchar (10);
}
