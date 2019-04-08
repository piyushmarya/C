// WAP to search an element in array using binary search.

#include<stdio.h>
void main()
{
    int i,j,a[10],temp,n;
    printf("enter 10 no.s:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
        for(j=0;j<9;j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
               a[j+1]=temp;
            }
    printf("\nAscending order:\n");
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);

    int l=0,h=9,mid=(l+h)/2,loc=mid+1;
    printf("\nEnter the number u want to search:");
    scanf("%d",&n);
    while(a[mid]!=n)
    {
        mid=(l+h)/2;
        if(a[mid]==n)
            loc=mid+1;
        if(n>a[mid])
            l=mid+1;
        else
            h=mid-1;
    }
    printf("Location is %d",loc);
}
