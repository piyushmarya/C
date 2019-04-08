//C Program to Check if a given Integer is Power of 2 using Bitwise Operators

#include <stdio.h>
void main()
{
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    if((a&(a-1))==0)
        printf("%d is power of 2",a);
    else
        printf("%d is not power of 2",a);
}
