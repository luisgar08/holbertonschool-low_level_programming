#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *_isalpha - print if the variable c is lower or upper
 *@c: variable
 *Description: print if the variable c is lower or upper
 *Return: 1 or 0
 */
int _isalpha(int c)
{
  if (c >= 'c' || c <= 'C')
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
