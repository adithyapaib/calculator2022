#include<stdio.h>

void main()
{
    int a[10],n,i,pos=0,num;

    printf("\nEnter the order of the matrix : ");
    scanf("%d",&n);
    printf("\nEnter the matrix elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the number to be searched : ");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            pos=i+1;
            break;
        }
    }
    
    if(pos==0)
    {
        printf("Element is not present in the array..!!\n");
    }
    else
    {
        printf("\nThe number %d was found in position %d\n",num,pos);
    }
}