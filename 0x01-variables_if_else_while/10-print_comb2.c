/**
 * *main-Escriba un programa que imprima todas las combinaciones
 * *posibles de números de un solo dígito.
 * *separados por ,, seguidos de un espacio
 * *
 * *Return: Always Zero
 */
#include <stdio.h>
int main(void)
{
int c = 48;
int d;
while (c <= 57)
{
d = 48;
while (d <= 57)
{
putchar(c);
putchar(d);
d = d + 1;
if (c != 57 || d != 58)
{
putchar(44);
putchar(32);
}
}
c = c + 1;
}
putchar(10);
return (0);
}
