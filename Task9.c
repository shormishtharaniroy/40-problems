//   Task 9: Count the Number of Digits in an Integer
#include<stdio.h>

int main()
{
    int n,t,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    t=n;
    if(n==0)
    {
        c=1;
    }
    while(n>0)
    {
        n=n/10;
        c++;
    }

    printf("Number of digits in %d is %d.",t,c);
    return 0;
}
