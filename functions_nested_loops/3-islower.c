#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *islower - print if c is lower
 */
void print_alphabet_x10(void)
{
  int i;
  char ch;
  for (i = 0; i < 10; i++)
    {
      for (ch = 'a'; ch <= 'z'; ch++)
	{
	  _putchar(ch);
	}
      _putchar('\n');
    }
}#include "main.h"
 /**
  *print_alphabet_x10 - print 10 time the alphabet
  */
void int _islower(int c)
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
