#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    // Remove trailing newline manually
    size_t len = strlen(buffer);
    if (len > 0 && buffer[len - 1] == '\n') {
        buffer[len - 1] = '\0';
    }
}

int main(void) {
    double salario1, salario2;
    char nome1[50], nome2[50];
    int idade1, idade2;
    char sexo1, sexo2;

    printf("Digite o nome da primeira pessoa: ");
    ler_texto(nome1, 50);

    printf("Digite o nome da segunda pessoa: ");
    ler_texto(nome2, 50); // No need for limpar_entrada() since fgets consumes newline

    printf("Digite o sexo da primeira pessoa (M/F): ");
    scanf(" %c", &sexo1); // Space before %c to skip whitespace

    printf("Digite o sexo da segunda pessoa (M/F): ");
    scanf(" %c", &sexo2);

    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1);

    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &idade2);

    printf("Digite o salario da primeira pessoa: ");
    scanf("%lf", &salario1);

    printf("Digite o salario da segunda pessoa: ");
    scanf("%lf", &salario2);

    printf("\n");
    printf("%s, sexo %c, tem %d anos e ganha R$%.2f por mes\n", nome1, sexo1, idade1, salario1);
    printf("%s, sexo %c, tem %d anos e ganha R$%.2f por mes\n", nome2, sexo2, idade2, salario2);

    return 0;
}