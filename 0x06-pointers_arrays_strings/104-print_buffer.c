#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_buffer - prints a buffer
 * @b: pointer buffer
 * @n: number of bytes
 * Return:no value
 */

void print_buffer(char *b, int size)
{
	if (size <= 0)

	{

		printf("\n");

		return;

	}

	int i, j;

	for (i = 0; i < size; i += 10)

	{
		printf("%08x ", i);

		for (j = i; j < i + 10; j += 2)

		{
			if (j < size)

			{
				printf("%02x", (unsigned char)b[j]);

			} 
			else

			{

				printf("  ");

			}

			if (j + 1 < size)
	    {
		    printf("%02x", (unsigned char)b[j + 1]);

	    } 

			else

			{

				printf("  ");

			}

			printf(" ");

		}
 
		printf(" ");

		for (j = i; j < i + 10 && j < size; j++)

		{

			if (isprint(b[j]))

			{

				printf("%c", b[j]);

			} 

			else

			{

				printf(".");

			}

		}
 
		printf("\n");
 
	}
}

