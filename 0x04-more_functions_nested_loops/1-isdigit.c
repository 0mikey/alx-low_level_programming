#include "main.h"
/**
 * _isdigit - checks for number digits
 * @c: number to checked
 * Return: 1 (digit) 0 if otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
