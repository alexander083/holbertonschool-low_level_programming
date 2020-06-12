/**
 * *main-Escriba un programa que imprima el alfabeto en minúsculas,
 * *seguido de una nueva línea.
 * *Excluiyendoo a q y e
 * *Return: Always Zero
 *
 */
#include <stdio.h>
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'q' && c != 'e')
{
putchar (c);
}
else
{
}
c = c + 1;
}
putchar (10);
return (0);
}
