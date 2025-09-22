#include <stdio.h>

int main (){
    int a,b, sum, diff, prod;
    float quotient;
    
    
    printf("enter the two number : \n");
    scanf("%d %d", &a, &b);
    
    sum = a + b ;
    diff = a - b ;
    prod = a * b ;
    if (b != 0) {
        quotient = (float)a / b;
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Error: Division by zero is not allowed!\n");
    }
    
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);
    
    return 0;
}