#include "main.h"
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: pointer in which to search substring
 * @needle: pointer to the substring
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int haystack_length = strlen(haystack);
	int needle_length = strlen(needle);

	for (i = 0; i <= (haystack_length - needle_length); i++)
	{
		if (strncmp(haystack + i, needle_length, needle) == 0)
		{
			return (haystack + i);
		}


		return (NULL);

}

