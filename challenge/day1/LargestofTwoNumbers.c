#include <stdio.h>

int main (){
    int a,b;
    
    printf("enter the two number : \n");
    scanf("%d %d",&a ,&b);
    
    if (a > b){
        printf("the number %d is larger than %d.",a,b);
    }else{
        printf("the number %d is largest than %d.",b,a);
    }
    return 0;
}