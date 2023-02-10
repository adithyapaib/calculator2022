#include<stdio.h>

void main()
{
    int a[10],n,i,num,pos=1,low,high,mid;

    printf("\nEnter the order of the matrix : ");
    scanf("%d",&n);
    printf("\nEnter the matrix elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the number to be searched : ");
    scanf("%d",&num);

    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==num)
        {
            pos=0;
            break;
        }
        else if(a[mid]>num)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

    printf("%d",mid);
    
    
    if(pos==0)
    {
        printf("\nThe number %d was found in position %d\n",num,mid+1);
    }
    else
    {
        printf("Element is not present in the array..!!\n");
    }
}