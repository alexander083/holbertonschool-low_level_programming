/**
* *main-Escriba un programa que imprima todas las combinaciones
* *posibles dos números de dos dígito.
* *separados por ,, seguidos de un espacio
* *Sin repetir
* *Return: Always Zero
*/
#include <stdio.h>
int main(void)
{
int a = 48;
int b;
int c;
int d;
while (a <= 57)
{
b = 48;
while (b <= 57)
{
c = 48;
while (c <= 57)
{
d = 49;
while (d <= 57)
{
if (a <= c && b <= d && (a != c || b != d))
{
putchar(a);
putchar(b);
putchar(32);
putchar(c);
putchar(d);
putchar(44);
putchar(32);
}

d = d + 1;
}
c = c + 1;
}
b = b + 1;
}
a = a + 1;
}
putchar(10);
return (0);
}

