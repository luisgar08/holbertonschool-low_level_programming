#include "main.h"
#include <stdio.h>
/**
 *print_square - function
 *@size: variable
 */
void print_square(int size)
{
int f;
int c;
if (size > 0)
{
for (f = 0; f < size; f++)
{
for (c = 0; c < size; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
