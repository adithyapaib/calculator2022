#include <stdio.h>




int main()
{
    int a,b;
    char c;
    // The user has to enter the first number
    printf("Enter the first number: ");
    // scan the input 
    scanf("%d",&a);
    // The user has to enter the second number 
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the operator: ");
    scanf(" %c",&c);
    // This is a switch statement 
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
    // return statement
    return 0;
    // Comment
}

