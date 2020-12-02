#include <stdio.h>
#include <math.h>

int main()
{
    float raio, volume_esfera;
    scanf("%f", &raio);
    volume_esfera = 1.33333 * 3.14 * pow(raio, 3);
    printf("%.2f", volume_esfera);
return 0;
}