// Task 10: Reverse the Digits of an Integer                          

#include<stdio.h>

 int main()
 {
     int n,a,rev = 0;
     printf("Enter a number:");
     scanf("%d",&n);
     int original = n;
     while(n>0)
     {
         a = n%10;
         rev = rev*10 + a;
         n = n/10;
     }
     printf("Reverse of %d is %d.",original,rev);
     return 0;
 }
