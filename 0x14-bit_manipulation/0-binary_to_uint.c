#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string of 0 and 1
 *
 * Return: converted number, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	if (b == NULL)
		return (0);
	for (n = 0; *b != 0; b++)
	{
		if (*b == '0')
		{
			n = n << 1;
		}
		else if (*b == '1')
		{
			n = n << 1;
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}
