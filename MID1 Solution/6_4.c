#include<stdio.h>
int main()
{
    int a=0, b=1, i=1,c,n;
    printf("Enter the fibonacci series length number: ");
    scanf("%d",&n);
    if(n>=1)
    {
        printf("Fibonacci Series: ");
        printf("%d ",b);
        //at first print 1
        i++;//it's means condition i<=n-1
    }
    do
    {
        c= a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
    while (i<=n);
    {
        printf("\n");
    }
    return 0;
}