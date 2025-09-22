#include <stdio.h>

int main (){
    char name[50];
    
    printf("Your name .?\n");
    scanf("%s", name);

    printf("Hello %s\n", name);
    
    return 0;
}