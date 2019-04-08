//WAP to find the number of trailing zeros in a given integer.

#include<stdio.h>
void main()
{
    int n,count=0,rem;
    printf("Enter any no. : ");
    scanf("%d",&n);
    if(n==0)
      count=1;
    while(n!=0)
    {
        rem=n%10;
        if(rem==0)
            count++;
        else
            break;
        n=n/10;
  }
    printf("Trailing zero's : %d",count);
}

