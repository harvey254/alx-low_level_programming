#include "main.h"
/**
 * reverse_array - reverses content of an array of integers
 * @a: pointer to an array of integers
 * @n: number of elements of the array
 * Return: reversed array of integers
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{

		temp = a[i];

		a[i] = a[n - i - 1];

		a[n - i - 1] = temp;
	}
}
