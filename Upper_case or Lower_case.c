#include<stdio.h>
int main()
{
    char ch = 'R';
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower case", ch);
    }
    else
    printf("Upper case", ch);

    return 0;
}