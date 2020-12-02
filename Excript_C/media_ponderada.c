#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1, v2, v3, media_ponderada;
    scanf("%f%f%f", &v1, &v2, &v3);
    media_ponderada = ((v1*2) + (v2*5) + (v3*7))/14;
    printf("%.2f", media_ponderada);

return 0;
}
