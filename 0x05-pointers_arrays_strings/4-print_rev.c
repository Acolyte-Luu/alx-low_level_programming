#include "main.h"
/**
* print_rev - prints string in reverse, then newline
* @s: string
*
*/
void print_rev(char *s)
{
int count = 0;
while (count >= 0)
{
if (s[count] == '\0')
break;
count = count + 1;
}
for (count--; count >= 0; count--)
_putchar(s[count]);
_putchar('\n');
}
