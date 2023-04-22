#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed between strings
 *
 * Return: no value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		*str = va_arg(args, char*);

		if (str != NULL)
		{
			printf("%s", str);
		}

		else
		{
			printf("(nil)");
		}

		f (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}

