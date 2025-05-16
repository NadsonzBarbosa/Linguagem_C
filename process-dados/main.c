#include <stdio.h>

void func1(int x, int y) {
    x = x * y;
    printf("x = %d\n", x);
}

void func2(int x, double y) {
    y = y * x;
    printf("y = %.2lf\n", y);
}

void func3(double b1, double b2, double h) {
    double area = (b1 + b2) / 2.0 * h; // Calculate trapezoid area
    printf("area = %.2f\n", area);
}

void func4(int a, int b) {
    int resultado = a / b;
    printf("resultado = %d\n", resultado);
}

void func5(int a) {
    double b;
    b = (double) a;
    printf("b = %lf\n", b);
}

int main() {
    printf("Exemplo 1:\n");
    func1(2, 2);

    printf("Exemplo 2:\n");
    func2(5, 2);

    printf("Exemplo 3:\n");
    func3(6.0,8.0,5.0);

    printf("Exemplo 4:\n");
    func4(5, 2);

    printf("Exemplo 5:\n");
    func5(5);

    return 0;
}