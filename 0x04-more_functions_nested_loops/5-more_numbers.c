#include "main.h"
/**
*more_numbers - function that prints numbers 10 times
*Return: Always 0 (Success)
*/
void more_numbers(void)
{
int ch;
int count;
for (count = 0; count < 10; count++)
{
for (ch = 1 ; ch <= 15; ch++)
{
if (ch >= 10)
_putchar((ch / 10) + 48);
}
_putchar('\n');
}
_putchar('\n');
}
