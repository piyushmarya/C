//C Program to Convert Binary Number to Decimal and Decimal to Binary

#include<stdio.h>
#include<math.h>

int binaryToDecimal(int);
int decimalToBinary(int);

void main()
{
    long int ch,num,res;
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%ld",&ch);
    switch(ch)
    {
        case 1: printf("Enter Binary Number: ");
                scanf("%ld",&num);
                res=binaryToDecimal(num);
                printf("Equivalent Decimal Number is %ld",res);
                break;
        case 2: printf("Enter Decimal Number: ");
                scanf("%ld",&num);
                res=decimalToBinary(num);
                printf("Equivalent Binary Number is %ld",res);
                break;
        default:printf("Invalid Choice");
    }
}
int binaryToDecimal(int n)
{
    int decimal=0,i=0,rem;
    while (n!=0)
    {
        rem=n%10;
        n/=10;
        decimal+=rem*pow(2,i);
        i++;
    }
    return decimal;
}
int decimalToBinary(int n)
{
    int q,binary=0,i=1;
    while(n!=0)
    {
    q=n%2;
    binary=binary+q*i;
    n=n/2;
    i=i*10;
    }
    return binary;
}


