//WAP to find first 100 prime numbers (using square root method).

#include<stdio.h>
#include<math.h>
void main()
{
    int i,n=2,count=1,flag=0;
    printf("First 100 prime numbers :\n");
    while(count<=100)
    {
        flag=0;
        for(i=2;i<=sqrt(n);i++)
            if(n%i==0)
                flag=1;
        if(flag==0)
        {
            printf("%d\t",n);
            count++;
        }
        n++;
    }
}
