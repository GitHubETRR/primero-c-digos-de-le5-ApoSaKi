#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100
#define MIN 10
#define MAX 40

void buscarMaxMin(int v[], int tam, int *maximo, int *minimo);
void mostrarPosicionesMax(int v[], int tam, int maximo);

int main() {
    int vector[TAM];
    int i;
    int maximo, minimo;

    srand(time(NULL)); // valores aleatorios

    // Se cargan los números entre los máximos y mínimos
    for(i = 0; i < TAM; i++) {
        vector[i] = MIN + rand() % (MAX - MIN + 1);
    }

    buscarMaxMin(vector, TAM, &maximo, &minimo);
    printf("Valor maximo encontrado: %d\n", maximo);
    printf("Valor minimo encontrado: %d\n", minimo);

    printf("\nEl valor maximo se repite en las posiciones:\n");
    mostrarPosicionesMax(vector, TAM, maximo);

    return 0;
}

void buscarMaxMin(int v[], int tam, int *maximo, int *minimo) {
    int i;

    *maximo = v[0];
    *minimo = v[0];

    for(i = 1; i < tam; i++) {
        if(v[i] > *maximo) {
            *maximo = v[i];
        }
        if(v[i] < *minimo) {
            *minimo = v[i];
        }
    }
}

void mostrarPosicionesMax(int v[], int tam, int maximo) {
    int i;
    for(i = 0; i < tam; i++) {
        if(v[i] == maximo) {
            printf("Posicion %d\n", i);
        }
    }
}
