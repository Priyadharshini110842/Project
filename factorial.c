#include <stdio.h>
#include<conio.h>
int main()
{
    int n,i,factorial=1;

    printf("Enter an integer:");
    scanf("%d",&n);
    if (n < 0)
        printf("Error");

    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;
        }
        printf("Factorial of this no",factorial);
    }

    return 0;
}