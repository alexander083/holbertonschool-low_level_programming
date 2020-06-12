/**
 * *main-Escriba un programa que imprima todos los números
 * *de un solo dígito de base 10 a partir de 0,
 * *seguido de una nueva línea.
 * *sin usar char
 * *Return: Always Zero
 *
 */
#include <stdio.h>
int main(void)
{
int c = 48;
while (c <= 57)
{
putchar(c);
c = c + 1;
}
putchar(10);
return (0);
}
