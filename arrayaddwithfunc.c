#include<stdio.h>

int getn()
{
    int n;
    scanf("%d",&n);
    return n;
}

int getm(int m1,int n1)
{
    int i,j,z[10][10];
    printf("\nEnter the matrix elements : ");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&z[i][j]);
        }
    }
    return z[10][10];
}

int dispm(int n1,int m1,int z[10][10])
{
    int i,j;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf("%d  ",z[i][j]);
        }
    }
    return 0;
}

int main()
{
    int a[10][10],b[10][10],c[10][10],m,n,i,j;
    printf("\nEnter the order of the matrix : ");
    m=getn();
    n=getn();

    a[][]=getm(m,n);
    b[10][10]=getm(m,n);

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
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    } 

    printf("\nThe addition matrix elements are : \n");
    dispm(m,n,c);
    return 0;
}
