// Binary Search
#include<stdio.h>

void main()
{
    int a[10],i,n,low,high,mid,key,found=1;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nEnter the element to be searched : ");
    scanf("%d",&key);

    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            found=0;
            break;
        }
        else if(a[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

    if(found==0)
    {
        printf("\nThe element %d found at position %d",key,mid+1);
    }
    else
    {
        printf("\nThe element was not found");
    }
}
