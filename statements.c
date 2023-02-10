// Determining the working of Break , Continue and Goto statements
#include<stdio.h>

void main()
{
    int i;

    for(i=0;i<=10;i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d  ",i);
    }

    printf("\n");

    for(i=0;i<=10;i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d  ",i);
    }

    printf("\n");
    
    begin:
    int n=0;
    printf("\nEnter any number| enter 0 to stop : ");
    scanf("%d",&n);
    printf("\nYou entered %d",n);
    if(n!=0)
    {
        goto begin;
    }
}