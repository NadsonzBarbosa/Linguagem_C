#include <stdio.h>

void numPrimo(int num) {
    if (num % 2 == 0) {
        printf("O numero %d eh par!\n", num);
    } else {
        printf("O numero %d nao eh impar!\n", num);
    }
}

int main(void) {
   numPrimo(5);
}