#include<stdio.h>
int main()
{
    int n, m = 0, a;
    printf("Which number do you want to multiplication: ");
    scanf("%i", &n);
    for (a = 1; a <= 10; a++)
    {
        m = m + n;
        printf("%i X %i = %i\n", n, a, m);
    }
    


return 0;    
}