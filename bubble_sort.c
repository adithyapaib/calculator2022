#include<stdio.h>

void main()
{
    int a[10],i,j,temp,n;
    printf("\nEnter the array size : ");
    scanf("%d",&n);

    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\nThe sorted array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}