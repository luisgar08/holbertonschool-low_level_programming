#include "main.h"
/**
 *print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void)
{
  int i;
  char ch;
  for (i = '0'; i <= 10; i++)
    {
  for (ch = 'a'; ch <= 'z'; ch++)
    {
      _putchar(ch);
    }
  _putchar('\n');
    }
  return (0);
}
