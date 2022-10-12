#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *_isalpha - print if the variable c is lower or upper
 *@c: variable
 *Description: print if the variable c is lower or upper
 *Return: 1 or 0
 */
int print_sign(int n)
{
  if (n <> '0' )
    {
      if (n >= '0')
	{
	  _putchar('+');
	  return (1);
	}
      else
	{
	  _putchar('-');
	  return (-1);
	}
    }
  else
    {
      _putchar(0);
      return (-1);
    }
}
