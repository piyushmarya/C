//WAP to check whether a number is palindrome or not.

#include<stdio.h>
void main()
{
    int num,n,rev=0,rem;
    printf("Enter any no. : ");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(num==rev)
        printf("%d is a palindrome number",num);
    else
        printf("%d is not a palindrome number",num);
}
