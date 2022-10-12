#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *_abs - print the absolute value of n
 *@n: variable
 *Return: n
 */
int print_last_digit(int n)
{
  n = n % 10;
  n = n * 11;
  return (n);
}
