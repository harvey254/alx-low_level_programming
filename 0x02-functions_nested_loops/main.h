#ifndef MAIN_H
#define MAIN_H

int _putchar(char c)
{
return (c);
}
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}


#endif /*MAIN_H*/
