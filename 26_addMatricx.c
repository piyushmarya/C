//C Program to add Two Matrices

#include<stdio.h>
void main()
{
    int i,j,a[30][30],b[30][30],c[30][30],d,e,f,g;
    printf("Enter size of matrix A (less than 30X30):");
    scanf("%d%d",&d,&e);
    printf("Enter size of matrix B (less than 30X30):");
    scanf("%d%d",&f,&g);
    if((d!=f)||(e!=g))
    {
        printf("Addition not possible");
    }
    else
    {
        printf("\nEnter elements of Matrix A:\n");
        for(i=0;i<d;i++)
            for(j=0;j<e;j++)
                scanf("%d",&a[i][j]);
        printf("\nMatrix A:\n");
        for(i=0;i<d;i++)
        {
            for(j=0;j<e;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("\nEnter elements of Matrix B:\n");
        for(i=0;i<d;i++)
            for(j=0;j<e;j++)
                scanf("%d",&b[i][j]);
        printf("\nMatrix B:\n");
        for(i=0;i<d;i++)
        {
            for(j=0;j<e;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        printf("\nSum of matrices:");
        for(i=0;i<d;i++)
            for(j=0;j<e;j++)
                c[i][j]=a[i][j]+b[i][j];
        printf("\nMatrix C:\n");
        for(i=0;i<d;i++)
        {
            for(j=0;j<e;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
}
