#include "main.h"
/**
* main - checks for alphabetic character
* @c: a character to be checked
* Return: reurns 1 and 0 depends on the condition
*/
int _isalpha(int c);
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
