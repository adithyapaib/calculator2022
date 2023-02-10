#include<stdio.h>
#include<math.h>
#include<stdbool.h> // for bool variable declarations
#include<string.h>  //for string operations

void main()
{
    bool val = true;
    printf("%d\n",val);

    int time = 20;
    (time < 18) ? printf("Good day.") : printf("Good evening.");  // this is a replacement of if statement

    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} }; // general declaration of 2d array

    char greetings[] = "Hello World!"; // declaration of a string
    printf("\n%s", greetings);
    greetings[13] = '.';  // string modification
    printf("\n%s", greetings);
    char txt[] = "\nWe are the so-called \"Vikings\" from the north."; // special string characters
    printf("\n%d", strlen(greetings));  // retruns string length
    printf("\n%d", sizeof(greetings));// returns memory size in bytes
    char hi[20]="Hi , ";
    strcat(hi, greetings);
    printf("\n%s",hi); //combines second string with first one [note the first string must be long enough to hold second]
    char new[10];
    strcpy(new, hi); // Copy str1 to str2
    printf("\nnew = %s",new);
    printf("\n%d", strcmp(greetings, hi));  // Compare str1 and str2

    char ch;
    char s[10];
    char scn[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",scn);
    printf("%c\n%s\n%s",ch,s,scn);

    printf("\n%p", &time); // Outputs memory address of time variable

    int* timem = &time; // Recommended pointer declaration
    printf("\n%d\n\n",*timem);

    int myNumbers[4] = {25, 50, 75, 100};
    for(int i=0;i<4;i++)
    printf("%d  ",myNumbers[i]);

    // Change the value of the first element to 13
    *myNumbers = 13;

    // Change the value of the second element to 17
    *(myNumbers +1) = 17;

    printf("\n");
    for(int i=0;i<4;i++)
    printf("%d  ",myNumbers[i]);

    int a,b;
    float c,d;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    printf("%d %d",a+b,a-b);
    printf("\n%0.1f %0.1f",c+d,c-d); 

    int i,n,sum=0;
    scanf("%d",&n);
    int *a=(int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]); 
    for(i=0;i<n;i++)
    sum+=a[i];
    printf("%d",sum);
    
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int temp;
    for(int i = 0; i<num/2; i++){
        temp = arr[i];
        arr[i] = arr[num-i-1];
        arr[num-i-1] = temp;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));

}