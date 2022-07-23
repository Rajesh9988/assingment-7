#include<stdio.h>

int main()
{
    int n,i,n1,n2,n3;
    printf("Enter a number\n");
    scanf("%d",&n);
    for ( i = 1; i < n; i++)
    {
        n3 =n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}