//WAP to find whether a number is Armstrong or not.

#include<stdio.h>
#include<math.h>

void main()
{
    int number,temp,remainder,armstrong=0,n=0;
    printf("Enter an integer: ");
    scanf("%d", &number);  // 370 371
    temp=number;
    while(temp != 0)
    {
        temp /= 10;
        ++n;
    }
    temp=number;
    while(temp != 0)
    {
        remainder=temp%10;
        armstrong+=pow(remainder, n);
        temp/=10;
    }
    printf("\n%d\n",armstrong);
    if(armstrong==number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
}
