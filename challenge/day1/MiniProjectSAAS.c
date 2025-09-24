#include <stdio.h>

float CalculMoyenne(int tab[], int lenght){
    int somme = 0;
    for (int i = 0 ; i < lenght ; i++){
        somme += tab[i];
    }
    return (float)somme / lenght ;
}

int maximale(int tab[], int lenght){
    int max = tab[0];
    for(int i = 1 ; i < lenght ; i++){
        if(tab[i] > max){
            max = tab[i];
        }
    }
    return max;
}

int main (){
    int nombre, note ;
    
    printf("combien du notes tu veux saisir ?");
    scanf("%d",&nombre);
    
    int notes[nombre];
    int somme = 0;
    
    for(int i = 0 ; i < nombre ; i++){
        printf("entre la note %d : ",i+1);
        scanf("%d",&notes[i]);
    }
    float moyenne = CalculMoyenne(notes, nombre);
    
    printf("Vous notes : \n");
    for(int i = 0 ; i < nombre ; i++){
        printf("Note %d = %d \n",i+1,notes[i]);
    }
    int max = maximale(notes,nombre);
    
    printf("La moyenne des notes est : %.2f\n",moyenne);
    printf("La not maximale est : %d",max);
    return 0 ;
}