#include "main.h"
/**
*more_numbers - function that prints numbers 10 times
*Return: no return
*/
void more_numbers(void)
{
int ch;
int count;
for (count = 0; count < 10; count++)
{
for (ch = 0 ; ch < 15; ch++)
{
if (ch >= 10)
_putchar((ch / 10) + 48);
_putchar((ch % 10) + 48);
}
_putchar('\n');
}
}
