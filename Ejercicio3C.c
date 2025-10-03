#include <stdio.h
#include <stdlib.h>
#include <time.h>

#define TAM 50
#define MIN 10
#define MAX 20

int contarMaximo(int vector[], int tam, int *valorMaximo);

int main() {
    int vector[TAM];
    int i;

    // Semilla Valores Aleatorio
    srand(time(NULL));

    //Se cargan los valores aleatorios del vector
    for(i = 0; i < TAM; i++) {
        vector[i] = MIN + rand() % (MAX - MIN + 1);
    }

    printf("Vector generado:\n");
    for(i = 0; i < TAM; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    int valorMax, repeticiones;
    repeticiones = contarMaximo(vector, TAM, &valorMax);

    printf("\nEl mayor valor del vector es %d y se repite %d veces.\n", valorMax, repeticiones);

    return 0;
}

// Función que encuentra el máximo y cuenta cuántas veces aparece
int contarMaximo(int vector[], int tam, int *valorMaximo) {
    int i;
    int max = vector[0];
    int contador = 1;

    // Encontrar el máximo
    for(i = 1; i < tam; i++) {
        if(vector[i] > max) {
            max = vector[i];
            contador = 1; // reiniciar el contador
        } else if(vector[i] == max) {
            contador++;
        }
    }

    *valorMaximo = max; // devolvemos el valor máximo encontrado
    return contador;
}
