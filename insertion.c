// write a c program to insert an element to a 1D array
#include<stdio.h>

void main()
{
    int a[10],n,i,pos,num;

    printf("\nEnter the order of the matrix : ");
    scanf("%d",&n);
    printf("\nEnter the matrix elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be inserted : ");
    scanf("%d",&num);
    printf("\nEnter the position to ne instered : ");
    scanf("%d",&pos);

    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;

    printf("\nThe array after insertion : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
}