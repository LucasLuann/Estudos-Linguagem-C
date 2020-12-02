#include <stdio.h>
#include <math.h>

int main()
{
    float aresta_cubo, volume_cubo;
    scanf("%f", &aresta_cubo);
    volume_cubo = pow(aresta_cubo, 3);
    printf("%.2f", volume_cubo);

return 0;
