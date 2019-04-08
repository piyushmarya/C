// C Program to find transpose of a matrix.

#include<stdio.h>
void main()
{
    int i,j,a[30][30],b[30][30],d,e;
    printf("Enter size of matrix (less than 30X30):");
    scanf("%d%d",&d,&e);
    printf("\nEnter elements of Matrix:\n");
    for(i=0;i<d;i++)
        for(j=0;j<e;j++)
        {
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
    printf("\nOriginal Matrix :\n");
    for(i=0;i<d;i++)
        {
            for(j=0;j<e;j++)
                printf("%d\t",a[i][j]);
            printf("\n");
        }
    printf("\nTranspose Matrix :\n");
    for(i=0;i<e;i++)
        {
            for(j=0;j<d;j++)
                printf("%d\t",b[i][j]);
            printf("\n");
        }
}
