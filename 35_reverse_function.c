// C Program to reverse a string by passing it to Function

#include<stdio.h>
void reverse(char *);
void main()
{
    char s[20];
    printf("Enter any string : ");
    gets(s);
    reverse(s);
    printf("Reversed string : %s",s);
}
void reverse(char *p)
{
   char *t,temp;
   t=p;
   for(;*p!='\0';p++);
   for(p--;p>=t;t++,p--)
   {
      temp=*p;
      *p=*t;
      *t=temp;
   }
}
