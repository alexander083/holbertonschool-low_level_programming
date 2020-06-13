/**
 * *main-Escriba un programa que imprima todas las combinaciones
 * *posibles de números de un dos dígito.
 * *separados por ,, seguidos de un espacio
 * *Sin repetir
 * *Return: Always Zero
 */
#include <stdio.h>
int main(void)
{
int c = 48;
int d;
while (c <= 57)
{
d = 49;
while (d <= 57)
{
if (c != d  && c < d)
{
putchar(c);
putchar(d);
if (c != 56 || d != 57)
{
putchar(44);
putchar(32);
}
}
d = d + 1;
}
c = c + 1;
}
putchar(10);
return (0);
}
