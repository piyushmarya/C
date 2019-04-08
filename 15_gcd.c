//WAP to calculate GCD of two numbers using Euclid’s algorithm.

#include<stdio.h>
void main()
{
    int a,b,rem=1,temp,gcd;
    printf("Enter 2 no.s: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
       temp=a;
       a=b;
       b=temp;
    }
    while(rem!=0)
    {
        gcd=a;
        rem=b%a;
        b=a;
        a=rem;
    }
    printf("GCD= %d",gcd);
}

