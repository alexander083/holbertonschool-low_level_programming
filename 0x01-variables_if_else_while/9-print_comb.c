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
char c = '0';
while (c <= '9')
{
putchar(c);
if (c != '9')
{
putchar(44);
putchar(32);
}
else
{
}
c = c + 1;
}
putchar(10);
return (0);
}
