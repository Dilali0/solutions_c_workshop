#include <stdio.h>
#include <stdlib.h>

int maximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2, max;

    printf("Entrez le premier nombre entier : ");
    scanf("%d", &num1);

    printf("Entrez le deuxième nombre entier : ");
    scanf("%d", &num2);

    max = maximum(num1, num2);

    printf("Le plus grand nombre entre %d et %d est : %d\n", num1, num2, max);

    return 0;
}



