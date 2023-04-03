#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string value
 * @accept: string value
 * Return: pointer to the memory s
 */
int _strspn(char *s, char *accept)
{
        unsigned int len = 0;
	int found = 1;

        while (*s !='\0' && found)
        {
                found = 0;

		for (unsigned int i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				len++;
				found = 1;
				break;
			}
		}
		if (found)
		{
			s++;
		}
        }

        return (len);
}

