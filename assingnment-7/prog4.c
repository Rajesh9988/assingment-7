#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, i, hcf;
    printf("Enter a number\n");
    scanf("%d%d", &a, &b);
    //  min = a>b?a:b;
    for (i = 1; i <= a || i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            
        }
    }

    printf("%d", hcf);
    return 0;
}