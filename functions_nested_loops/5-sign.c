#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *sign - print n how to positive, negative or 0
 *@n: variable
 *Description: print n how to positive, negative or 0
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
