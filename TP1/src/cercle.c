#include <stdio.h>
#include <math.h>

int main() {
    float rayon, aire, perimetre;
    float pi = 3.15926535;
    printf("Rayon : ");
    scanf("%f", &rayon);

    aire = pi * rayon * rayon;
    perimetre = 2 * pi * rayon;

    printf("L'aire : %f \nLe perimetre : %f \n", aire, perimetre);
    return 0;


}
