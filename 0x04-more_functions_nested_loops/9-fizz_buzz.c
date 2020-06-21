#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	int N = 1;

	while (N <= 100)
	{
		if (N % 3 == 0 && N % 5 == 0)
			printf("FizzBuzz ");
		else
			if (N % 3 == 0)
				printf("Fizz ");
			else
				if (N % 5 == 0)
					if (N != 100)
						printf("Buzz ");
					else
						printf("Buzz");
				else
					printf("%d ", N);
		N++;
	}
	printf("\n");
	return (0);
}
