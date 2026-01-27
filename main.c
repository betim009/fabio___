#include <stdio.h>
#include <math.h>

int main () {
    double alturaMetros;
    double distancia;
    double raio = 6378150;
    
    printf("Insira a sua Altura acima do mar (metros):");
    scanf("%lf", &alturaMetros);
    
    distancia = sqrt(alturaMetros * alturaMetros + 2 * raio * alturaMetros);
    
    printf("Distancia ao horizonte: %f\n", distancia);
    
    return 0;
    
}