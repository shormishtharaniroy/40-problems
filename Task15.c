//Check whether a number is prime number or not.

#include<stdio.h>

int main()
{
    int a,b=0;
    printf("Enter a number: ");
    scanf("%d",&a);
     for(int i=1;i<=a;i++)
    {
        if(a%i == 0)
        {
            b++;
        }
    }
     if(b>2)
            {
                printf("%d is not a prime number.",a);
            }
            else
            {
                printf("%d is a prime number",a);
            }

    return 0;
}
