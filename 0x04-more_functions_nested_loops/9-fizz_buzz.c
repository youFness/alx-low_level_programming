#include "main.h"
#include <stdio.h>

int main(void)
{
int x;
for (x = 0; x < 100; x++)
{
if((x%3==0)&&(x%5==0))
{
printf("FizzBuzz");
}
else if(x%3==0)
{
print("Fizz");
}
else if (x%5 ==0)
{
print("Buzz");
}
else
{
printf("%d", x);
}
if(x!= 100)
{
printf(" ")
}
}
printf("\n");
return(0);
}
