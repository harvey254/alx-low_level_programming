#include "main.h"
#include <string.h>
/**
 * infinite_add - adds two numbers
 * @n1: integer string value
 * @n2: integer string value
 * @r: buffer
 * @size_r: size of buffer in bytes
 * Return: sum of two numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int i, j, k, sum, carry, digit;

	if (len1 + len2 + 1 > sizeR)
	{
		return (0);
	}

	memset(r, '0', size_r);
	r[size_r - 1] = '\0';

	for (i = len1 - 1, j = len2 - 1, k = size_r - 2; k >= 0 && (i >= 0 || j >= 0 || carry); i--, j--, k--)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;

		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		int sum = digit1 + digit2 + carry;

		carry = sum / 10;

		r[k] = digit + '0';
	}

	while (*r == '0' && *(r + 1) != '\0')
	{
		r++;
	}
	return (r);
}

