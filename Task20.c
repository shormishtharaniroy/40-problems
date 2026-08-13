//  Task 20: Generate Truth Table for NOT Operation    

#include<stdio.h> 
 
int main() 
{
    int A; 
    printf("A | NOT A\n"); 
    for(A=0;A<=1;A++) 
    { 
        printf("%d | %d\n",A,!A); 
    } 
    return 0; 
} 