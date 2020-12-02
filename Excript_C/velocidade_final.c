#include <stdio.h>

int main()
{
    float velocidade_inicial, aceleracao, tempo, velocidade_final;
    scanf("%f%f%f", &velocidade_inicial, &aceleracao, &tempo);
    velocidade_final = velocidade_inicial + (aceleracao * tempo);
    printf("%.2f", velocidade_final);

return 0;
}
