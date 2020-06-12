/**
 * *main-Escriba un programa que imprima el alfabeto en minúsculas alreves
 * *seguido de una nueva línea.
 * *Return: Always Zero
 *
 *
 */
#include <stdio.h>
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c = c - 1;
}
putchar(10);
return (0);
}

