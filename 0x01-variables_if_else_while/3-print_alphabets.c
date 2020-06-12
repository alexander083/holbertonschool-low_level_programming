/**
 * *main-Escriba un programa que imprima el alfabeto en minúsculas
 * *y luego en mayúsculas, seguido de una nueva línea.
 * *Return: Always Zero
 *
 */
#include <stdio.h>

int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c = c + 1;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c = c + 1;
}
putchar(10);
return (0);
}
