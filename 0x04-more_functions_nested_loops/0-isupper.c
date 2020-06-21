#include "holberton.h"
/**
  * _isupper - verifique el carácter en mayúsculas.
  *@c:char
  * Return: Always 0 o 1.
  */
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
