#include <stdio.h>
int main()
{
int a;
scanf("%d",&a);
int b= a%2 ;
if (b==1)
{
    printf("odd");
}
else
{
    printf("even");
}
return 0;
}