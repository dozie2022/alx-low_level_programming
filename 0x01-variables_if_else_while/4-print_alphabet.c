#include <stdio.h>
/**
*main - assign random number to variable
*print the last digit of the number
*Return: Always 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar(10);
return (0);
}
