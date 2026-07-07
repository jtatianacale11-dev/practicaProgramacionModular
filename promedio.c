#include <stdio.h>

int main(){
    float nota1,nota2,nota3,promedio;

    printf("Ingrese la primera nota decimal:\n");
    scanf("%f",&nota1);
    printf("Ingrese la segunda nota decimal:\n");
    scanf("%f",&nota2);
    printf("Ingrese la tercera nota decimal:\n");
    scanf("%f",&nota3);

    promedio = (nota1 +nota2 +nota3) / 3;

    

    printf("El promedio es:%.2f",promedio);

   