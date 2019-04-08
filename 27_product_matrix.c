// C Program to multiply 2 matrices.

#include<stdio.h>
void main()
{
    int i,j,a[30][30],b[30][30],c[30][30],d,e,f,g,k,sum=0;;
    printf("Enter size of matrix A (less than 30X30):");
    scanf("%d%d",&d,&e);
    printf("Enter size of matrix B (less than 30X30):");
    scanf("%d%d",&f,&g);
    if((e!=f))
    {
        printf("Multiplication not possible");
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
        for(i=0;i<f;i++)
            for(j=0;j<g;j++)
                scanf("%d",&b[i][j]);
        printf("\nMatrix B:\n");
        for(i=0;i<f;i++)
        {
            for(j=0;j<g;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        printf("\nProduct of matrices:\n");
        for(i=0;i<e;i++)
        {
            for(j=0;j<g;j++)
            {
                for(k=0;k<f;k++)
                {
                   sum=sum+a[i][k]*b[k][j];
                }
                c[i][j]=sum;
                sum=0;
            }
        }
        for(i=0;i<e;i++)
        {
            for(j=0;j<g;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
}
