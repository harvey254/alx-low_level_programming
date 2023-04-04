#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a:
 * @size: 
 * Return: no return value
 */
void print_diagsums(int *a, int size)
{
	int i, main_diagonal = 0, other_diagonal = 0;

	for (i = 0; i < size; i++)
	{
		main_diagonal += a[(i * size) + i];

		other_diagonal += a[(i + 1) * (size - 1)];
	}

	printf("%d\n", sum1);

	printf("%d\n", sum2);
}
