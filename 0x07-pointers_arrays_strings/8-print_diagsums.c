#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a:
 * @size: 
 * Return: no return value
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;

	for (i = o, i < size; i++)
	{

		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - 1 - i);
	}

	printf("Sum of main diagonal: %d\n", sum1);
	printf("Sum of secondary diagonal: %d\n", sum2);
}
