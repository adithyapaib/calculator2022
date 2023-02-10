// write a c program to merge 2 1D arrays
#include<stdio.h>

void main()
{
    int a[10],b[10],c[25],n1,n2,m,i,j=0;

    printf("\nEnter the order of the matrix A and matrix B : ");
    scanf("%d %d",&n1,&n2);
    m=n1+n2;
    printf("\nEnter the matrix A elements : ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the matrix B elements : ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
        j++;
    }
    for(i=0;i<m;i++)
    {
        c[j]=b[i];
        j++;
    }

    printf("\nThe merged array elements are : ");
    for(i=0;i<m;i++)
    {
        printf("%d  ",c[i]);
    }
    printf("\n");
}