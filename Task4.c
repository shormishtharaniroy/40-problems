//  Task 4: Find the Greater Number Between Two Number 

#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("%d is greater than %d.",a,b);

    if(a<b)
        printf("%d is greater than %d.",b,a);

    if(a==b)
        printf("Both numbers are equal.");


}

