#include "holberton.h"
/**
  * _isupper - verifique el carácter en mayúsculas.
  *@c:char
  * Return: Always 0 o 1.
  */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
