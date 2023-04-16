#include <stdio.h>


int main(void)
{
// Accept Input From user (char), where (a) stands for "Addition", (m) for "Multiplications," and (d) for "Division,"
char in;

printf("Enter a letter : \n a- Additon \n m- Multiplication \n d-Divison");
scanf(&in);

if(in=='a')
{
    float x,y;
    printf("Enter the first number");
    scanf(x);
    printf("Enter the second number");
    scanf(y);
    float sum=x+y;

    printf("The sum of these two numbers = ", sum);
}
else if(in=='m')
{
    float x,y;
    printf("Enter the first number");
    scanf(x);
    printf("Enter the second number");
    scanf(y);
    float sum=x*y;

    printf("The multiplication of these two numbers = ", sum);
}
else if(in=='d')
{
    float x,y;
    printf("Enter the first number");
    scanf(x);
    printf("Enter the second number");
    scanf(y);
    float sum=x/y;

    printf("The division of these two numbers = ", sum);
}
else
printf("Wrong input.");

}
