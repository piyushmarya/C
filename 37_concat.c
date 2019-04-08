// C Program to concatenate 2 strings.

#include<stdio.h>
void main()
{
    char s1[20],s2[20];
    int i,j;
    printf("Enter 1st string : ");
    gets(s1);
    printf("Enter 2nd string : ");                                      //        j
    gets(s2);
    for(i=0;s1[i]!='\0';i++);

    for(j=0;s2[j]!='\0';j++,i++)
    {
       s1[i]=s2[j];
    }
    s1[i]='\0';
    printf("\nConcatenated string : %s",s1);
}
