/**
 * *main-Escriba un programa que imprima todas las combinaciones
 * *posibles de números de un tres dígito.
 * *separados por ,, seguidos de un espacio
 * *Sin repetir
 * *Return: Always Zero
 */
#include <stdio.h>
int main(void)
{
int c = 48;
int d, e;
while (c <= 57)
{
d = 49;
while (d <= 57)
{
e = 50;
while (e <= 57)
{
if (c != d && c != e  && c < d && d < e)
{
putchar(c);
putchar(d);
putchar(e);
if (c != 55 || d != 56 || e != 57)
{
putchar(44);
putchar(32);
}
}
e = e + 1;
}
d = d + 1;
}
c = c + 1;
}
putchar(10);
return (0);
}
