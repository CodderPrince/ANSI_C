#include<stdio.h>
int main()
{
int intervals, i,t;
float u,a,distance;
printf("Enter the number of intervals: ");
scanf("%d",&intervals);
for(i=1; i<=intervals; i++)
{
printf("\nintervals: %d\n",i);
printf("Enter the time in second: ");
scanf("%d",&t);
printf("Enter the initial velocity: ");
scanf("%f",&u);
printf("Enter the acceleration: ");
scanf("%f",&a);
distance= u*t + (a*t*t)/2;
}
printf("\nTotal distance travelled : %.3f m", distance);


return 0;
}
