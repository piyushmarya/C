//C Program to Display Fibonacci Series

#include<stdio.h>
void main()
{
    int i,n,c,a=0,b=1;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    if(n>=1)
        printf("%d\t",a);
    if(n>=2)
        printf("%d\t",b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}
