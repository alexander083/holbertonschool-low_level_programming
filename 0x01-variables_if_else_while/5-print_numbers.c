/**
 * *main-Escriba un programa que imprima todos los números
 * *de un solo dígito de base 10 a partir de 0
 * *seguido de una nueva línea.
 * *Return: Always Zero
 *
 */
#include <stdio.h>
int main(void)
{
char c = '0';
while (c <= '9')
{
putchar(c);
c = c + 1;
}
putchar(10);
return (0);
}
