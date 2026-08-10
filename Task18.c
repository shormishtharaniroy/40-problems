// Task 18: Generate Truth Table for And Operation  
 
#include<stdio.h> 
 
int main() 
{ 
    int A,B; 
    printf("A B | A AND B\n"); 
    for(A = 0;A <= 1;A++) 
    { 
        for(B=0;B<=1;B++) 
 
 
        { 
            printf("%d %d | %d\n",A,B,A&&B); 
        } 
    } 
 
    return 0; 
} 