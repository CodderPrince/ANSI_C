#include<stdio.h>
#include<math.h>
int main()
{
double x1=2,x2=5,y1=2,y2=6,pi=3.1416,d,r,A;
d= sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
r= d/2;
A= pi*r*r;
printf("Area of the circle: \t%.2lf\n", A);
return 0;
}