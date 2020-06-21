#include "holberton.h"
/**
  * _isdigit - verifique el carácter en mayúsculas.
  *@c:char
  * Return: Always 0 o 1.
  */
int _isdigit(char c)
{
	if(c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
