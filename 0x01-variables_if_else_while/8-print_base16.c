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
char c = '0';
while (c <= 'f')
{
putchar(c);
c = c + 1;
if (c == 58)
{
c = 97;
}
}
putchar(10);
return (0);
}
