//C Program to calculate standard deviation.

#include<stdio.h>
#include<math.h>
void main()
{
    int a[5],i,sum=0,n=5;
    float sd,avg,sum2;
    printf("Enter values of x:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    for(i=0;i<n;i++)
    {
        sum2=sum2+pow((a[i]-avg),2);
    }
    sd=sqrt(sum2/n);
    printf("Standard Deviation : %f",sd);

}
