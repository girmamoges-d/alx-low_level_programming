#include <stdio.h>
/**
*main - Entry point
*Return: print possible combination of single digit numbers
*/
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (!(x == '9'))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
