#include "main.h"
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
int count;
int max = 80;
char msg[] = "_putchar";
for (count = 0; count < max; count++)
{
if (msg[count] == '\0')
{
break;
}
else
_putchar(msg[count]);
}
_putchar('\n');
return (0);
}
