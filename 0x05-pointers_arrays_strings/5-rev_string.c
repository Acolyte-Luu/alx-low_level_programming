#include "main.h"
/**
* rev_string - reverses string
* @s: string
*/
void rev_string(char *s)
{
int count = 0;
int a;
int b;
char *str;
char temp;
while (count >= 0)
{
if (s[count] == '\0')
break;
count = count + 1;
}
str = s;
for (a = 0; a < (count - 1); a++)
{
for (b = a + 1; b > 0; b--)
{
temp = *(str + b);
str = str + b;
str = (str + (b - 1));
*(str + (b - 1)) = temp;
}
}
}
