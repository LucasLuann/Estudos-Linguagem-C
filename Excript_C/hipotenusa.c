#include <stdio.h>
#include <math.h>

int main(){
    
    float co, ca, hip;
    scanf("%f%f", &co, &ca);
    hip = sqrt(pow(co, 2)+ pow(ca, 2));
    printf("%.2f", hip);

return (0);
}

