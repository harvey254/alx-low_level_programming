#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strtow - 
 * @str: string value
 * Return:
 */

char **strtow(char *str) {
    // Return NULL if str == NULL or str == ""
    if (str == NULL || strlen(str) == 0) {
        return NULL;
    }

    // Count the number of words in the string
    int num_words = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            num_words++;
        }
    }

    // Allocate memory for the array of strings
    char **words = (char**) malloc(sizeof(char*) * (num_words + 1));
    if (words == NULL) {
        return NULL;
    }

    // Copy each word into the array of strings
    int word_index = 0;
    int start_index = 0;
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int length = i - start_index;
            if (length > 0) {
                char *word = (char*) malloc(sizeof(char) * (length + 1));
                if (word == NULL) {
                    for (int j = 0; j < word_index; j++) {
                        free(words[j]);
                    }
                    free(words);
                    return NULL;
                }
                strncpy(word, str + start_index, length);
                word[length] = '\0';
                words[word_index] = word;
                word_index++;
            }
            start_index = i + 1;
        }
    }
    words[num_words] = NULL;

    return words;
}

