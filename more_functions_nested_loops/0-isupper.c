#include <stdio.h>
#include "main.h"
/**
 *_isupper - return 1 if c is upper
 *@c - variable
 *Return - 0 or 1
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
