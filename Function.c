#include<stdio.h>

void f1(char name[],int age)  // multiple parameters
{
    printf("\nHello %s , you are %d years old.",name,age);
}

void f2(int num[5])
{
    printf("\n");
    for (int i = 0; i < 5; i++)
    printf("%d  ", num[i]);
    printf("\n");
}

int f3(int,int); // function declaration

void main()
{
    f1("Starman",18);
    f1("Starlight",16);

    int num[5] = {10, 20, 30, 40, 50};
    f2(num);

    printf("\nThe sum of 3 and 4 is : %d\n",f3(3,4));
}

int f3(int a ,int b) // function defination
{
    return a+b;
}