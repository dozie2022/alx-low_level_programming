#include "main.h"
/**
* main - prints lowercase alphabets 10 times
*print_alphabet_x10:Prints the lowercase alphabets
*
*/
void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
