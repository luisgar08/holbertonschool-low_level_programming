#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main - function main
 *Description: print alphabet reverse
 *Return: zero
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
