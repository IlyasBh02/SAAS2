#include <stdio.h>

int main (){
    
    int n,i;
    
    printf("enter the number : \n");
    scanf("%d",&n);
    
    printf("the numbers from 1 to %d is : \n",n);
    for(i = 1 ; i <= n ; i++){
        printf("%d ",i);
    }

    return 0;
}