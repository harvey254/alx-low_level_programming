#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - 
 * @s1:
 * @s2:
 * Return:
 */

char *str_concat(char *s1, char *s2) {
    // If either s1 or s2 is NULL, treat it as an empty string
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }

    size_t s1_len = strlen(s1);
    size_t s2_len = strlen(s2);

    // Allocate memory for the concatenated string, including the null terminator
    char *concatenated = (char*) malloc(sizeof(char) * (s1_len + s2_len + 1));
    if (concatenated == NULL) {
        return NULL;
    }

    // Copy the contents of s1 and s2 into the concatenated string
    strcpy(concatenated, s1);
    strcat(concatenated, s2);

    return concatenated;
}

