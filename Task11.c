// Task 11: Check Whether a Number is Palindrome                          
#include<stdio.h>

int main()
{
    int a,b,rev=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    int f = a;
    while (a>0)
    {
        b = a%10;
        rev = rev*10 + b;
        a = a/10;
    }

    if(f==rev)
    {
        printf("%d is a palindrome number.",f);
    }
    else
      {

        printf("%d is not a palindrome number.",f);
      }

    return 0;
}

