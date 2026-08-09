#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    float raio, areaCirculo;
    float base, altura, areaRetangulo;

    // Media
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    // Circulo
    printf("\nDigite o raio do circulo: ");
    scanf("%f", &raio);

    areaCirculo = 3.14 * raio * raio;

    // Retangulo
    printf("\nDigite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    areaRetangulo = base * altura;

    // Resultados
    printf("\nMedia: %.2f\n", media);
    printf("Area do circulo: %.2f\n", areaCirculo);
    printf("Area do retangulo: %.2f\n", areaRetangulo);

    return 0;
}