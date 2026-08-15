//   Task 22: Check Whether a Number Belongs to a Given Set                
#include<stdio.h> 
 
int main() 
{ 
    int n,found = 0; 
    int A[5]={2,4,6,8,10}; 
 
    printf("Enter a number: "); 
    scanf("%d",&n); 
 
    for(int i=0;i<5;i++) 
    { 
        if(A[i]==n) 
        { 
            found = 1; 
            break; 
        } 
    } 
    if(found) 
    { 
        printf("%d belongs to the set A.",n); 
    } 
    else 
    { 
        printf("%d does not belongs to the set A.",n); 
    } 
    return 0; 
} 
 
                                                 