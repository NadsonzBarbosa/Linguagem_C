#include <stdio.h>

void vet(int N) {
    int vet[N];

    for (int i = 0; i < N; i++) {
        printf("digite um numero: ");
        scanf("%d", &vet[i]);
    }
    printf("\nNUMEROS DIGITADOS:\n");
    for (int i = 0; i < N; i++) {
        printf("%d\n", vet[i]);
    }
}

void mat(int M, int N) {
    int mat[M][N];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMATRIZ DIGITADA:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("[%d]", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    vet(5);
    mat(2, 3);

    return 0;
}
