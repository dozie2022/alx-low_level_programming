#include "main.h"
/**
* function that prints a sign of a number
*@n: The number of which sign will be printed
* Return: 1 if greater than zero
* 0 if number is zero
* -1 if less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if ( n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
