// C Program to find the length of a string.

#include<stdio.h>
void main()
{
    char s[20];
    int len=0,i;
    printf("Enter any string : ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
        len++;
    printf("Total characters in given string is : %d",len);
}
