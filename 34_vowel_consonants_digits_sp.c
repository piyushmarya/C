// C Program to find the number of vowels,consonants,digits and white spaces in a string.

#include<stdio.h>
#include<string.h>
void main()
{
    int i,vow=0,cons=0,dig=0,sp=0;
    char str[100];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            sp++;
        else
            if(str[i]>='0'&&str[i]<='9')
               dig++;
            else
                if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                    vow++;
                    else
                        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
                            cons++;
    }
    printf("Number of vowels      : %d",vow);
    printf("\nNumber of consonants  : %d",cons);
    printf("\nNumber of digits      : %d",dig);
    printf("\nNumber of white spaces: %d",sp);
}
