#include <stdio.h>

int main()
{
    float tempo, velocidade_media, distancia;
    scanf("%f%f", &tempo, &velocidade_media);
    distancia = tempo * velocidade_media;
    printf("%.2f km", distancia);
return(0);
}
