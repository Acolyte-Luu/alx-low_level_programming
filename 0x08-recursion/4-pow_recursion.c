#include "main.h"
/**
*_pow_recursion - return value of x raised to the power y
*@x: int x
*@y: power
*Return: x to the power of y
*/
int _pow_recursion(int x, int y)
{
if (x < y)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);
return (x * _pow_recursion(x, y - 1));
}
