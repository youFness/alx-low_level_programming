#include "main.h"

void print_triangle(int size)
{
int x, y, z;
if(size <=0)
{
_putchar('\n');
}
else
{
for(x=0;x<size;x++)
{
for(y=size-x;y>1;y--)
{
_puctchar(32);
}
for(z=0;z<=x;z++)
{
_puctchar(35);
}
_putchar('\n');
}
}
}
