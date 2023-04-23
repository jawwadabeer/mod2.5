#include <stdio.h>
int main()
{
float a, b;
scanf("%f %f", &a, &b);
float c= a+b;
float d= a-b;
float e= a*b;
float f= a/b;
printf("%.0f+%.0f=%.0f\n%.0f-%.0f=%.0f\n%.0f*%.0f=%.0f\n%.0f/%.0f=%.2f\n", a, b, c, a, b, d, a, b, e, a, b, f);
return 0;
}
