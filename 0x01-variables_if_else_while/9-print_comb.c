#include <stdio.h>
/**
*main - Entry point
*int ch - integer ch
*k - checker integer
*Return: Always 0 (Success)
*/
int main(void)
{
int ch, k = 0;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
if (k > 0)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
