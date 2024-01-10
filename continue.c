#include<stdio.h>
int main()
{
    int n = 0;
    while (n < 10)
    {
        n++;
        if (n % 2 == 0)
        {
            continue;
        }
        printf("%i\n", n);
    }
    
return 0;
    
}