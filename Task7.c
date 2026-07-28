// Task 7: Find the Factorial of a Number                  

#include<stdio.h>

int main()
{
    int i,n,f=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f= f*i;
    }
    printf("Factorial of %d is %d",n,f);
    return 0;
}
