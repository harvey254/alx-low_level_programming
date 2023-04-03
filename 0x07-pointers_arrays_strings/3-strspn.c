#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string value
 * @accept: string value
 * Return: pointer to the memory s
 */
unsigned int _strspn(char *s, char *accept)
{
	int s_length = strlen(s);

	int accept_length = strlen(accept);

	int f, i, k, cnt = 0;

	for (i = 0; i < s_length; i++)
	{
		f = 0;

		for (k = 0; k < accept_length; k++)
		{
			if (s[i] == accept[k])
			{
				f = 1;

				break;
			}
		}

		if (!found)
		{
			return (cnt);
		}


		cnt++;
	}

	return (cnt);
}

