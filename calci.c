#include <stdio.h>


int main()
{
    int a,b;
    char c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Types Of Operators Available\n+\n-\n*\n/");
    printf("Enter the operator: ");
    scanf(" %c",&c);
    switch(c)
    {
        case '+':
            printf("The sum is %d",a+b);
            break;
        case '-':
            printf("The difference is %d",a-b);
            break;
        case '*':
            printf("The product is %d",a*b);
            break;
        case '/':
            printf("The quotient is %d",a/b);
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}

