//   Task 14: Count the Number of Divisors of a Number 

#include<stdio.h>

int main()
{
    int a,b = 0;
    printf("Enter a number: ");
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        if(a%i == 0)
        {
            b++;
        }
    }
    printf("Number of divisors of %d is %d. ",a,b);

    return 0;
}
