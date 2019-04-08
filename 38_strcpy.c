// C Program to copy a string.

#include<stdio.h>
void main()
{
    char s1[20],s2[20];
    int i;
    printf("Enter any string : ");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
      s2[i]=s1[i];

    s2[i]='\0';

    printf("Original string : %s",s1);
    printf("\nCopied string   : %s",s2);
}
