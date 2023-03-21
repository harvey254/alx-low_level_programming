#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);


void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');

#endif /*MAIN_H */
