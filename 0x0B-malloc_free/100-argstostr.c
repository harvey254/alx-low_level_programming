#include <stdlib.h>
#include "main.h"
/**
 * argstostr - 
 * @ac
 * @av
 * Return:
 */

char *argstostr(int ac, char **av) {
    // Return NULL if ac == 0 or av == NULL
    if (ac == 0 || av == NULL) {
        return NULL;
    }

    // Calculate the total length of the concatenated string
    int total_length = 0;
    for (int i = 0; i < ac; i++) {
        int j = 0;
        while (av[i][j] != '\0') {
            total_length++;
            j++;
        }
        total_length++;
    }

    // Allocate memory for the concatenated string
    char *result = (char*) malloc(sizeof(char) * (total_length + 1));
    if (result == NULL) {
        return NULL;
    }

    // Copy the arguments into the concatenated string
    int index = 0;
    for (int i = 0; i < ac; i++) {
        int j = 0;
        while (av[i][j] != '\0') {
            result[index] = av[i][j];
            index++;
            j++;
        }
        result[index] = '\n';
        index++;
    }
    result[index] = '\0';

    return result;
}

