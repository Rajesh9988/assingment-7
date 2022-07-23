#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,hcf,i;
    printf("Enter num1 & num2:-\n");
    scanf("%d%d",&num1,&num2);

    for ( i = 1; i <=num1; i++)
    {
        if ((num1%i==0)&&(num2%i==0))
        {
            hcf = i;
        }
        
    }
    if (hcf==1)
    {
        printf("The number is co-prime number\n");
    }
    else
        printf("The number is not-co-prime number\n");
    getch();
    return(0);
    
}