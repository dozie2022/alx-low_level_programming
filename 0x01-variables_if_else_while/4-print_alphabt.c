#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase
*Print all the letters except q and e
*Return: Always 0
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
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
