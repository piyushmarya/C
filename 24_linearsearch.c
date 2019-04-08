// WAP to search an element in array using linear search.

#include<stdio.h>
void main()
{
    int i,num,a[10],flag=0;
    printf("Enter 10 no.s :\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("Enter number to be searched : ");
    scanf("%d",&num);
    for(i=0;i<10;i++)
        if(num==a[i])
        {
            flag=1;
            printf("\n%d found at location %d",num,i+1);
        }
    if(flag==0)
        printf("%d is not present in the array",num);
}
