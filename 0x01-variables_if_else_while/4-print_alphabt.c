#include <stdio.h>
/**
*main - prints the alphabet in lowercase
*Print all the letters except q and e
*Return: always 0
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alpphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;
else if (alphabet == 'e')
continue;
putchar (alphabet);
}
putchar ('\n');
return (0);
}
