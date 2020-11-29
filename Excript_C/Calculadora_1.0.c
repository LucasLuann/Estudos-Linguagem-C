#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, soma, subtracao, multiplicacao, divisao;

    printf("Calculadora 1.0\n");
    printf("Digite os dois numeros que deseja calcular: ");
    scanf("%i%i", &num1, &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    printf( "\n=============== Resultados ===============\n" );

    printf( "\nSoma: %i\n", soma);
    printf( "\nSubtracao: %i\n", subtracao);
    printf( "\nMultiplicacao: %i\n", multiplicacao);
    printf( "\nDivisao: %i\n", divisao);

    printf( "\n=============== Fim ===============\n" );

    return 0;
}