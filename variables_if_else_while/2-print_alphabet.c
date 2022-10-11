#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main - function main
 *Description: print alphabet in lower
 *Return: zero
 */
int main(void)
{
char ch;
 for (ch = 'a' ; ch <='z' ; ch++)
   {
     printf("%c", ch);
   }
 putchar('\n');
return (0);
}
