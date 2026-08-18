//  Task 23: Count the Number of Elements in a Set 
 
#include<stdio.h> 
 
int main() 
{ 
    int n; 
    printf("Enter number of elements: "); 
    scanf("%d",&n); 
    int A[n]; 
    printf("Enter elements: "); 
 
    for(int i=0;i<n;i++) 
    { 
        scanf("%d",&A[i]); 
    } 
    printf("Number of elements in the set is %d.",n); 
 
    return 0; 
} 