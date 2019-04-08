//C program to find frequency of characters in a string.

#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,count[26]={0};
    printf("Enter any string :");
    gets(str);
    for(i=0;str[i]!='\0';i++)
        if(str[i]>='a' && str[i]<='z')
            count[str[i]-'a']++;
    for(i=0;i<26;i++)
        if(count[i]!=0)
        printf("%c\t%d\n",i+97,count[i]);
}
