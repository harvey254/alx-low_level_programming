#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack:
 * @neddle:
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystacks, char *needle)
{
        char *start = haystack;

        while (*start !='\0')
        {
                char *h = start;
		char *n = needle;

		while (*n !='\0' && *h == *n)
		{

			h++;

			n++;
		}
		if (*n == '\0')
		{

			return (start);
		}

		start++;
        }

        return (NULL);
}

