#include "main.h"
#include <string.h>
/**
 * leet - encodes
 * @str: string value
 * Return: encoded value
 */
char *leet(char *str)
{
static char leet_str[100]; 
int i, j;
for (i = 0, j = 0; str[i] != '\0'; i++) 
{
if (str[i] == 'a' || str[i] == 'A') 
{
leet_str[j++] = '4';
}
else if (str[i] == 'e' || str[i] == 'E') 
{
leet_str[j++] = '3';
}
else if (str[i] == 'o' || str[i] == 'O') 
{
leet_str[j++] = '0';
}
else if (str[i] == 't' || str[i] == 'T') 
{
leet_str[j++] = '7';
}
else if (str[i] == 'l' || str[i] == 'L') 
{
leet_str[j++] = '1';
}
else 
{
leet_str[j++] = str[i];
}
}
leet_str[j] = '\0'; 
return (leet_str);
}
