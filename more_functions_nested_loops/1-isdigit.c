#include <stdio.h>
#include "main.h"
/**
 * _isdigit - return to 1 if c is a number
 *@c - variable
 *Description: return to 1 if c is a number
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
