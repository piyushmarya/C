//Write a program to convert decimal number to hexadecimal number.

#include<stdio.h>
#include<math.h>
void main()
{
    int n,j,q,i=0;
    printf("Enter any decimal number : ");
    scanf("%d",&n);
    char hexa[100]="";
    while(n!=0)
    {
        q=n%16;
        if(q<10)
            hexa[i++]=(char)(q+48);
        else
            hexa[i++]=(char)(q+55);
        n=n/16;
    }
    printf("Equivalent Hexadecimal no. :");
    for (j=i-1;j>=0;j--)
        printf("%c",hexa[j]);
}
