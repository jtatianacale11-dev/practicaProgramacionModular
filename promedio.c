#include <stdio.h>

/* * Aquí declaramos las funciones que calculan los promedios de cada categoría.*/
float calcularPromedioUnidad(int i);
float calcularACD();
float calcularAPE();
float calcularAA();
float calcularES();

int main() {
    const int NUMEROUNIDAD = 3; // Total de unidades académicas a evaluar
    float totalUnidad = 0; 

   // Ciclo para iterar sobre cada unidad
    for (int i = 1; i <= NUMEROUNIDAD; i++) {
       
        float resultadoUnidad = calcularPromedioUnidad(i);
        
      
        totalUnidad += resultadoUnidad;
    }

    // Cálculo del promedio general de las 3 unidades
    float promediofinal = totalUnidad / NUMEROUNIDAD;

    printf("\n-------------------------------\n");
    printf("PROMEDIO FINAL DE LAS 3 UNIDADES: %.2f\n", promediofinal);



    /**  Cálculo de la nota final cualitativa: APROBADO: Si la nota final es mayor o igual a 7,
    ** SUPLETORIO: Si la nota final es mayor o igual a 2.5 y menor a 7. REPROBADO: Si la nota final es menor a 2.5.*/

if (promediofinal >= 7.0) {
    printf("Resultado: APROBADO\n");
} else if (promediofinal >= 2.5) {
    printf("Resultado: SUPLETORIO\n");
} else {
    printf("Resultado: REPROBADO\n");
}
    
    return 0;
}

/** Función: calcularPromedioUnidad*/

float calcularPromedioUnidad(int i) {
    float totalUnidad;
    float promedioACD, promedioAPE, promedioAA, promedioES;
    
    printf("\nUnidad: %d\n", i);

    
    promedioACD = calcularACD();
    promedioAPE = calcularAPE();
    promedioAA = calcularAA();
    promedioES = calcularES();

   
    printf("El promedio total ACD es: %.2f\n", promedioACD);
    printf("El promedio total APE es: %.2f\n", promedioAPE);
    printf("El promedio total AA es: %.2f\n", promedioAA);
    printf("El promedio total ES es: %.2f\n", promedioES);
    
    totalUnidad = promedioACD + promedioAPE + promedioAA + promedioES;
    
    printf("Promedio final de la Unidad %d: %.2f\n", i, totalUnidad);



   return totalUnidad;

}

/* * Funciones de cálculo (ACD, APE, AA, ES):
 * Cada una solicita el número de actividades y valido que estén en el rango,
 * solicito que las nota que se validen el rango de 0-10 y calcula su ponderación.
 */

    
float calcularACD() {
    int actividad;
    float nota, suma = 0;
   
// Validación: El número de actividades debe estar entre 1 y 10
    do {
        printf("Ingrese el numero de actividades para ACD : ");
        scanf("%d", &actividad);
    } while (actividad < 1 || actividad > 10);

    for (int i = 1; i <= actividad; i++) {
        do
        { 
            printf("  Ingrese Nota actividad %d (0.0-10.0): ", i);
            scanf("%f", &nota);
        } while (nota < 0.0 || nota > 10.0);// Rango de la nota  0.0 a 10.0
        suma += nota;
    }
    return (suma / actividad) * 2.0 / 10.0;//Cálculo ponderación (2.0)
}
       

    
float calcularAPE() {
    int actividad;
    float nota, suma = 0;
        
// Validación: El número de actividades debe estar entre 1 y 10
    do {
        printf("Ingrese el numero de actividades para APE: ");
        scanf("%d", &actividad);
    } while (actividad < 1 || actividad > 10);

    for (int i = 1; i <= actividad; i++) {
        do
        { 
            printf("  Ingrese Nota actividad %d (0.0-10.0): ", i);
            scanf("%f", &nota);
        } while (nota < 0.0 || nota > 10.0);// Rango de la nota  0.0 a 10.0
        suma += nota;
    }
   
    return (suma / actividad) * 2.5 / 10.0; //Cálculo ponderación (2.5)
}

float calcularAA() {
    int actividad;
    float nota, suma = 0;

 // Validación: El número de actividades debe estar entre 1 y 10 
     do {
        printf("Ingrese el numero de actividades para AA: ");
        scanf("%d", &actividad);
    } while (actividad < 1 || actividad > 10);

    for (int i = 1; i <= actividad; i++) {
        do
        { 
            printf("  Ingrese Nota actividad %d (0.0-10.0): ", i);
            scanf("%f", &nota);
        } while (nota < 0.0 || nota > 10.0);// Rango de la nota  0.0 a 10.0
        suma += nota;
    }
    return (suma / actividad) * 2.0 / 10.0; //Cálculo ponderación (2.0)
}

float calcularES() {
    int actividad;
    float nota, suma = 0;

// Validación: El número de actividades debe estar entre 1 y 10

     do {
        printf("Ingrese el numero de actividades para ES : ");
        scanf("%d", &actividad);
    } while (actividad < 1 || actividad > 10);

    for (int i = 1; i <= actividad; i++) {
        do
        { 
            printf("  Ingrese Nota actividad %d (0.0-10.0): ", i);
            scanf("%f", &nota);
        } while (nota < 0.0 || nota > 10.0);// Rango de la nota  0.0 a 10.0
        suma += nota;
    }
    return (suma / actividad) * 3.5 / 10.0; //Cálculo ponderación (3.5)

}

