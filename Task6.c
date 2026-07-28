// Task 6: Find the Sum of First n Natural Numbers           

#include<stdio.h>

int main()
{
    int n,sum;
    printf("Enter the value of n:");
    scanf("%d",&n);

    printf("Sum of first %d natural numbers is %d",n,sum = n*(n+1)/2);
    return 0;
}
