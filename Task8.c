 

 //  Task 8: Print the First n Even Numbers

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("First %d even numbers are: ",n);

    for(int i=1;i<=n;i++)
    {
        if(i%2 == 0){
        printf("%d ", i);
        }
    }
    return 0;
}

