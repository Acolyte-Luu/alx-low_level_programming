#include "main.h"
/**
*_strstr - finds first occurence of substring
*@haystack: string
*@needle: substring
*Return: pointer to the start of substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
char *bhaystack;
char *pneedle;
while (*haystack != '\0')
{
bhaystack = haystack;
pneedle = needle;
while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
{
haystack++;
pneedle++;
}
if (!*pneedle)
return (bhaystack)
haystack = bhaystack + 1;
}
return (0);
}
