#include <stdio.h>

int main() {
    int n, steps, max;
    char choice;

    do {
        printf("Enter the number: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Please enter a positive number!\n");
            return 0;
        }

        steps = 0;
        max = n;

        printf("The sequence for %d: ", n);

        while (n != 1) {
            printf("%d ", n);
            steps++;

            if (n > max) {
                max = n;
            }

            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = 3 * n + 1;
            }
        }

        printf("1\n");
        steps++; 

        printf("Total steps: %d\n", steps);
        printf("Maximum value: %d\n", max);

        printf("Do you want to try another number? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye!\n");
    return 0;
}
