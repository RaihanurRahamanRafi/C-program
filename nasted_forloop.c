#include<stdio.h>
int main()
{
    int n, i;
    for ( n = 1; n <= 20; n++)
    {
        for ( i = 1; i <= 10; i++)
        {
            printf("%i X %i = %i\n", n, i, n*i);
        }
        
    }
    return 0;
}