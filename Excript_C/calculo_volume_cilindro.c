#include <stdio.h>
#include <math.h>

int main()
{
    float raio_cilindro, altura_cilindro, volume_cilindro, pi;
    scanf("%f%f", &raio_cilindro, &altura_cilindro);
    pi = 3.14;
    volume_cilindro = pow(raio_cilindro, 2) * pi * altura_cilindro;
    printf("%.2f", volume_cilindro);

return 0;
}