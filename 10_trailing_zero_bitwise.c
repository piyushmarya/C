#include<stdio.h>
void main()
{
    int count=0,num;
    printf("Enter any number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        if(num&1==0)
        {
            count++;
            num=num>>1;

        }
        else
        {
            break;
        }
    }
    printf("Trailing Zeros: %d",count);
}
