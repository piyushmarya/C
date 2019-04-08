//WAP to swap two numbers using bitwise XOR Operator.

#include<stdio.h>
void main()
{
    int i,j;
    printf("Enter 2 no.s: ");
    scanf("%d%d",&i,&j);
    i=i^j;
    j=i^j;
    i=j^i;
    printf("No.s after swapping: %d %d",i,j);
}

