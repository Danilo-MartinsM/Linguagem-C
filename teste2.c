#include <stdio.h>
#include <string.h>

int main() {

    int idade = 32;
    double salario = 4560.9;
    char nome[50] = "Maria Silva";
    char sexo = 'F';
    
    printf("A funcionária %s, sexo %c, ganha R$ %.2lf, e tem %d anos", nome, sexo, salario, idade);

}