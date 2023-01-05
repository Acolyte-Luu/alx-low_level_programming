#include "main.h"
/**
*factorial - return factorial of number
*@n: variable
*Return: factorial of variable
*/
int factorial(int n)
{
int ftr = 0;
if (n < 0)
return (-1);
else if (n < 2)
return (n);
ftr = n * factorial(n - 1);
return (ftr);
}
