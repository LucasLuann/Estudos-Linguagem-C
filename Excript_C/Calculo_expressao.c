#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    // (x + 4) * (x-6)

    float x, exp;

     printf("Digite o valor de X: ");
     scanf("%f", &x);

     exp = (x + 4) * (x - 6);
     printf("\n%.2f\n", exp);

     return 0;
}
