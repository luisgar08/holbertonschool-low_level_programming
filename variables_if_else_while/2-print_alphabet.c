#include <stdio.h>
/**
 * main - enterpoint
 *Return = zero
 *
 */
int main(void)
{
for (int x='a' ; x <= 'z' ; x ++)
{
char small = tolower(x);
putchar(small);
}
return 0;
}
