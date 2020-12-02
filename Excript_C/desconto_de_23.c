#include <stdio.h>

int main()
{
    float valor_inicial, valor_desconto, valor_final;
    scanf("%f", &valor_inicial);
    valor_desconto = (valor_inicial * 23) / 100;
    valor_final = valor_inicial - valor_desconto;
    printf("%.2f", valor_final);

return 0;
}
