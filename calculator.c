#include <stdio.h>


int main(void)
{
    // Accept Input From user (char), where (a) stands for "Addition", (m) for "Multiplications," and (d) for "Division,"
    char in;

    printf(" a- Additon \n m- Multiplication \n d-Divison \n Enter a letter : ");
    scanf(" %c", &in);

    if (in == 'a')
    {
        int x, y;
        printf("Enter the first number : ");
        scanf("%d", &x);
        printf("Enter the second number : ");
        scanf("%d", &y);
        int s = x + y;

        printf("The sum of these two numbers = %d", s);
    }
    else if (in == 'm')
    {
        int x, y;
        printf("Enter the first number : ");
        scanf("%d", &x);
        printf("Enter the second number : ");
        scanf("%d", &y);
        int p = x * y;

        printf("The multiplication of these two numbers = %d", p);
    }
    else if (in == 'd')
    {
        int x, y;
        printf("Enter the first number : ");
        scanf("%d", &x);
        printf("Enter the second number : ");
        scanf("%d", &y);
        int q = x / y;

        printf("The division of these two numbers = %d", q);
    }
    else
        printf("Wrong input.");

}
