#include <stdio.h>

int main (){
    int n;
    
    printf("enter the number : \n");
    scanf("%d",&n);
    
    if(n %2 == 0){
        printf("the number %d it's a INTEGER .",n);
    }else{
        printf("the number %d it's a ODD",n);
    }
    
    return 0;
}