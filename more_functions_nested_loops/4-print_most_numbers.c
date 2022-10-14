#include "main.h"
/**
 */
void print_most_numbers(void)
{
  int n;
  for (n = '0'; n <= '9'; n++)
    {
      if (n != 3 && n != 5)
	{
	  _putchar(n);
	}
    }
  _putchar('\n');
}
