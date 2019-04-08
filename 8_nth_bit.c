//WAP to print nth bit of a given integer.

#include<stdio.h>
void main()
{
    int n,b;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("Enter bit position:");
    scanf("%d",&b);
    if(n>>b-1&1)
        printf("Bit is 1");
    else
        printf("Bit is 0");
}
