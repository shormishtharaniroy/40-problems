// Task 2: Positive, Negative or Zero Number                          
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:",n);
    scanf("%d",&n);
    if(n>0)
        printf("%d is a positive number.",n);
    if(n<0)
        printf("%d is a negative number.",n);
    if(n==0)
        printf("The number is zero.");
    return 0;
}
