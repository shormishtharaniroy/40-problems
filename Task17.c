//  Task 17: Find the Least Common Multiple of Two Numbers

#include<stdio.h> 
 
int main() 
{ 
    int a,b,lcm; 
    printf("Enter two numbers: "); 
    scanf("%d%d",&a,&b); 
 
    if(a>b)
    { 
        lcm = a; 
    } 
    else 
    { 
        lcm = b; 
    } 
    while(1) 
    { 
        if(lcm%a==0 && lcm%b==0) 
        { 
            printf("LCM of %d and %d is %d.",a,b,lcm); 
            break; 
        } 
        lcm++; 
    } 
 
    return 0; 
} 