#include <stdio.h>
/**
*main - Entry point
*int dig1 - first digit
*dig2 - second digit
*dig3 - third digit
*dig4 - 4th digit
*k - checker integer
*Return: Always 0 (Success)
*/
int main(void)
{
int dig1, dig2, dig3, dig4, j = 0, k = 0;
for (dig1 = '0'; dig1 <= '9'; dig1++)
{
for (dig2 = dig1 + 1; dig2 <= '9'; dig2++, k++)
{
for (dig3 = '0'; dig3 <= '9'; dig3++)
{
for (dig4 = dig3 + 1; dig4 <= '9'; dig4++, j++)
{
if (k > 0 && j > 0)
{
putchar(' ');
putchar(',');
putchar(' ');
}
putchar(dig1);
putchar(dig2);
}
}
putchar(dig3);
putchar(dig4);
}
} 
putchar('\n');
return (0);
}
