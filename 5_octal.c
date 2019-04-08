//Write a program to convert decimal number to octal number.

#include<stdio.h>
#include<math.h>
void main()
{
  long int n=0,q=0,i=0,octal=0;
  printf("Enter any decimal number : ");
  scanf("%d",&n);
  while(n!=0)
  {
    q=n%8;
    octal=octal+(q*pow(10,i));
    n=n/8;
    i++;
  }
  printf("\nEquivalent Octal no. : %ld",octal);
}
