#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *_islower - print if the variable is lower
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
