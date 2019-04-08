#include<stdio.h>
void main()
{
    int i,j,a[10],temp;
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
    printf("\nNumbers after sorting:\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
}
