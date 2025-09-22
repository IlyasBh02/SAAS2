#include<stdio.h>

int main (){
    int a,b,T;
    
    printf("enter two number : \n");
    scanf("%d %d", &a, &b);
    
    printf("the two number beffor the swap is : %d %d\n", a, b);
    
    T=a;
    a=b;
    b=T;
    
    printf("The two number after the swap is : %d %d\n",a, b);
    
    return 0;
    
}