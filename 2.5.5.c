#include <stdio.h>
int main()
{
int Taka;
scanf("%d", &Taka);
if (Taka > 20000)
{
    printf("Buy Gucci Bag\nBuy Gucci Belt\n");
}
else if (Taka >= 10000)
{
    printf("Buy Gucci Bag\n");
}
else if (Taka >= 5000)
{
    printf("Buy Levis Bag\n");
}
else
{
    printf("Buy something form New Market");
}
return 0;
}
