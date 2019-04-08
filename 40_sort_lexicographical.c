// C Program to Sort Elements in Lexicographical Order (Dictionary Order).

#include <stdio.h>
void main()
{
    int i,j,n;
    char str[100][100];
    char temp[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    fflush(stdin);
    printf("Enter String values: \n");
    for(i=0;i<n;i++)
        gets(str[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n-1;j++)
            if(strcmp(str[j],str[j+1])>0)
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
    printf("Elements after sorting :\n");
    for(i=0;i<n;i++)
        puts(str[i]);
}
