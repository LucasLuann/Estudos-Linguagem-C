#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, num2 ;
    num = 20;
    num2 = 5;

    int soma = num + num2;
    printf("A soma eh igual a : %i\n", soma);

    int subtracao = num - num2;
    printf("O valor da subtracao eh igual a : %i\n", subtracao);

    int divisao = num / num2;
    printf("O valor da divisao eh igual a : %i\n", divisao);

    int multiplicacao = num * num2;
    printf("O resultado da multiplicacao eh igual a : %i\n", multiplicacao);

    return 0;
}
