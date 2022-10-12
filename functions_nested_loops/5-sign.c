#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *sign - print n how to + or - or 0
 *@n: variable
 *Description: print if the variable c is lower or upper
 *Return: 1, 0 or -1
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
