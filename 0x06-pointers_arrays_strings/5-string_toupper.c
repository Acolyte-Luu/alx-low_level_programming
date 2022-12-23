#include "main.h"
/**
* string_toupper - Function that changes all string to uppercase
* @n: input string
* Return: capitialized string
*/
char *string_toupper(char *n)
{
int i = 0;
while (n[i])
{
if (n[i] >= 97 && n[i] <= 122)
n[i] = n[i] - 32;
i++;
}
return (n);
}
