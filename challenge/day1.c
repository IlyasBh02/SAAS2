#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Entrez une operation (+ - * /) : ");
    scanf(" %c", &op);

    printf("Entrez deux nombres : ");
    scanf("%f %f", &a, &b);

    switch(op) {
        case '+': printf("Resultat = %.2f\n", a + b); break;
        case '-': printf("Resultat = %.2f\n", a - b); break;
        case '*': printf("Resultat = %.2f\n", a * b); break;
        case '/': 
            if(b != 0)
                printf("Resultat = %.2f\n", a / b);
            else
                printf("Erreur : division par zero\n");
            break;
        default: printf("Operation invalide\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Entrez une operation (+ - * /) : ");
    scanf(" %c", &op);

    printf("Entrez deux nombres : ");
    scanf("%f %f", &a, &b);

    switch(op) {
        case '+': printf("Resultat = %.2f\n", a + b); break;
        case '-': printf("Resultat = %.2f\n", a - b); break;
        case '*': printf("Resultat = %.2f\n", a * b); break;
        case '/': 
            if(b != 0)
                printf("Resultat = %.2f\n", a / b);
            else
                printf("Erreur : division par zero\n");
            break;
        default: printf("Operation invalide\n");
    }

    return 0;
}
