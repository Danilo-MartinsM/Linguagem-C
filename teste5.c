#include <stdio.h>
#include <string.h>

int main(){

    int idade;
    double salario, altura;
    char genero;
    char nome [50];

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu salário: ");
    scanf("%lf", &salario);
    printf("Digite sua altura: ");
    scanf("%lf", &altura);

    printf("IDADE = %d\n", idade);
    printf("SALARIO = R$ %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);

    return 0;
}