#ifndef MAIN_C
#define MAIN_C
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

#endif /* MAIN_C */
