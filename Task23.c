//  Task 23: Count the Number of Elements in a Set 
 
#include<stdio.h> 
 
int main() 
{ 
    int a; 
    printf("Enter number of elements: "); 
    scanf("%d",&a); 
    int A[a]; 
    printf("Enter elements: "); 
 
    for(int i=0;i<a;i++) 
    { 
        scanf("%d",&A[i]); 
    } 
    printf("Number of elements in the set is %d.",a); 
 
    return 0; 
} 