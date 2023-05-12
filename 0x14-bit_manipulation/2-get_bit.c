/**
 * get_bit - returns the value of a bit at a given index,
 * @n: number to get bit from
 * @index: index of bit starting from 0
 *
 * Return: value of bit at index, -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	return ((n & m) > 0);
}
