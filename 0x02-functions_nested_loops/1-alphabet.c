#include "main.h"
/**
*main - Entry point
*print_alphabet - 'call of the function print_alphabet'
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
