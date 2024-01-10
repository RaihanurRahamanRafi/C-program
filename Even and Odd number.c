#include<stdio.h>
int main()
{
    int number, reminder;
    printf("Enter your number: ");
    scanf("%i", &number);
    reminder = number % 2;
    if (reminder == 0)
    {
        printf("Even number");
    }
    else
    printf("Odd number");

    return 0;
}
