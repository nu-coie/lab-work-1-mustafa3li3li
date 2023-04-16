#include <stdio.h>


int main(void)
{
    // Accept Input From user (char), where (a) stands for "Addition", (m) for "Multiplications," and (d) for "Division,"
    char in;

    printf(" a- Additon \n m- Multiplication \n d-Divison \n Enter a letter :");
    scanf(" %c", &in);

    if (in == 'a')
    {
        float x, y;
        printf("Enter the first number");
        scanf("%f", &x);
        printf("Enter the second number");
        scanf("%f", &y);
        float s = x + y;

        printf("The sum of these two numbers = ", s);
        getchar();
    }
    else if (in == 'm')
    {
        float x, y;
        printf("Enter the first number");
        scanf("%f", &x);
        printf("Enter the second number");
        scanf("%f", &y);
        float p = x * y;

        printf("The multiplication of these two numbers = ", p);
        getchar();
    }
    else if (in == 'd')
    {
        float x, y;
        printf("Enter the first number");
        scanf("%f", &x);
        printf("Enter the second number");
        scanf("%f", &y);
        float q = x / y;

        printf("The division of these two numbers = ", q);
        getchar();
    }
    else
        printf("Wrong input.");
        getchar();

}
