// write a c program to delete an element from a 1D array
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
    printf("\nEnter the position of element to be deleted : ");
    scanf("%d",&pos);

    num=a[pos-1];
    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;

    printf("\nThe element %d was successfully deleted from the array",num);
    printf("\nThe array after deletion : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
}