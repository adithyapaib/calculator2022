#include <stdio.h>
#include <stdbool.h>


int main() {
    printf("Deepak D Nayak \n");
    int roll = 9;
    char sec = 'F';
    printf("Roll No. = %d , Section = %c \n", roll,sec);
    const int num = 10;
    //num = 15;
    printf("Num = %d",num);

    char myChar;
    printf("%lu\n", sizeof(myChar));

    bool isProgrammingFun = true;
    printf("%d", isProgrammingFun);

    int age;
    char yname[20];
    printf("\n Enter your age : ");
    scanf("%d",&age);
    printf("\n Enter your name :  ");
    fgets(yname, sizeof(yname), stdin);
    printf("\n %s is %d yeras old.", yname, age);



    return 0;
}