#include <stdio.h>

int main (){
    int n,i,sum=0;
    
    printf("enter the number : ");
    scanf("%d", &n);
    
    sum = n * (n+1)/2;
    
    printf("Sum of first %d natural numbers = %d ",n,sum);
    
    return 0;
    
}