#include<stdio.h>

int geti()
{
    int a;
    scanf("%d",&a);
    return (a);
}

int getf()
{
    float a;
    scanf("%f",&a);
    return(a);
}

int dispi(int a)
{
    printf("%d",a);
    return 0;
}

int dispf(float a)
{
    printf("%f",a);
    return 0;
}

int addi(int a,int b)
{
    return (a+b);
}

int addf(float a,float b)
{
    return (a+b);
}

int main()
{
    int n,m;
    n=geti();
    m=geti();
    int sum;
    sum=addi(n,m);
    dispi(sum);
    return 0;
}