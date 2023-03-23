#include "main.h"

void print_diagonal(int n)
{
int x, y;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
for (x = 0; x < n; x++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
