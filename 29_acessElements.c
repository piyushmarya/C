//C Program to access elements of an array using pointer.

    #include<stdio.h>
    void main()
    {
        int a[5],i;
        int *arr;
        arr=a;
        printf("Enter 5 elements: \n");
        for(i=0;i<5;i++)
            scanf("%d",&a[i]);
        printf("Elements present in array: \n");
        for(i=0;i<5;i++)
            printf("%d ",*(arr+i));
    }
