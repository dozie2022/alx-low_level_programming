#include <stdio.h>
/**
*main - a program that prints the alphabet in lowercase
*followed by a new line
*Return: always 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= '2'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar(10);
return (0);
}
