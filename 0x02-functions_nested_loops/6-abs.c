#include "holberton.h"

/**
  * _abs - Escribe una función que calcule el valor absoluto de un entero...
  *
  * @n:integer
  * Return: Always 0.
  */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
