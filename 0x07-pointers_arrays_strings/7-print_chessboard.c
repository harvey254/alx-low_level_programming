#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 * @a: string value
 * Return: pointer to the beginning of the located substring
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int k;

	for (i = 0; i < 8; i++)
	{
		for (k = 0; k < 8; k++)
		{
			printf("%c", a[i][k]);
		}

		printf("\n");
	}
}
