//Write a program to find the size of all the data types.

#include <stdio.h>
void main()
{
    int integerType;
    short shortType;
    long longType;
    float floatType;
    double doubleType;
    char charType;
    printf("Size of short: %ld bytes\n",sizeof(shortType));
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of long: %ld bytes\n",sizeof(longType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("Size of char: %ld byte\n",sizeof(charType));
}
