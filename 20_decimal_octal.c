//C Program to Convert Octal Number to Decimal and Decimal to Octal

#include<stdio.h>
#include<math.h>

int octalToDecimal(int);
int decimalToOctal(int);

void main()
{
    int ch,num,res;
    printf("1. Octal to Decimal\n");
    printf("2. Decimal to Octal\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("Enter Octal Number: ");
                scanf("%d",&num);
                res=octalToDecimal(num);
                printf("Equivalent Decimal Number is %d",res);
                break;
        case 2: printf("Enter Decimal Number: ");
                scanf("%d",&num);
                res=decimalToOctal(num);
                printf("Equivalent Octal Number is %d",res);
                break;
        default:printf("Invalid Choice");
    }
}
int octalToDecimal(int n)
{
    int decimal=0,i=0,rem;
    while (n!=0)
    {
        rem=n%10;
        n=n/10;
        decimal+=rem*pow(8,i);
        i++;
    }
    return decimal;
}
int decimalToOctal(int n)
{
    int q,octal=0,i=1;
    while(n!=0)
    {
    q=n%8;
    octal=octal+q*i;
    n=n/8;
    i=i*10;
    }
    return octal;
}
