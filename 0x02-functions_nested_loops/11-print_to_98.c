#include "holberton.h"
#include <stdio.h>

/**
  * print_to_98 - Escribe una función que imprima los numero desde n hasta 98
  * de forma acendente
  * @b:integera
  * Return: Always 0.
  */
void print_to_98(int n)
{
	if (n <= 98)
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ",n);
			else
				printf("%d",n);
			n++;
		}
	else
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ",n);
			else
				printf("%d",n);
			n--;
		}
	printf("\n");
}
