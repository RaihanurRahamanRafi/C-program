#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
        if (n == 0)
        {
            printf("Number is zero");
        }
        else if (n > 0)
        {
            printf("Number is positive");
        }
        else
        printf("Number is negative");

    return 0;
}