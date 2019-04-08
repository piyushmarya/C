//Write a C program to find the factorial of a number, where the number is entered by user.

#include<stdio.h>
void main()
{
    int i,n,fact=1;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("Factorial= %d",fact);
}
