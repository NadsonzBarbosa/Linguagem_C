#include <stdio.h>

void whileSoma() {
    int x, sum = 0;

    printf("digite o primeiro numero: ");
    scanf("%d", &x);

    while (x > 0) {
        sum += x;
        printf("digite o proximo numero: ");
        scanf("%d", &x);
    }
    printf("total: %d\n", sum);
}

int main(void) {
    whileSoma();
    return 0;
}