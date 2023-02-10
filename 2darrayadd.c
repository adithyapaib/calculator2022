#include<stdio.h>

void main()
{
    int a[10][10],b[10][10],c[10][10],m,n,i,j;

    printf("\nEnter the order of the matrix : ");
    scanf("%d %d",&m,&n);
    printf("\nEnter the matrix elements A : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the matrix elements b : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\nThe addition matrix elements are : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }   
}