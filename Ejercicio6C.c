#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20     // Tamaño del vector
#define MIN 20     // Límite inferior
#define MAX 90     // Límite superior

void CargaVector(int v[]);
void InvertirVector(int v[], int invertido[]);
void MostrarVector(int v[]);

int main() {
    int vector[TAM];
    int vectorInvertido[TAM];

    CargaVector(vector);
    InvertirVector(vector, vectorInvertido);

    printf("\nVector original:\n");
    MostrarVector(vector);

    printf("\nVector invertido:\n");
    MostrarVector(vectorInvertido);

    return 0;
}

void CargaVector(int v[]) {
    int i;
    srand(time(NULL)); // Semilla aleatoria

    for(i = 0; i < TAM; i++) {
        v[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void InvertirVector(int v[], int invertido[]) {
    int i, j = TAM - 1;

    for(i = 0; i < TAM; i++) {
        invertido[i] = v[j];
        j--;
    }
}

void MostrarVector(int v[]) {
    int i;
    for(i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}
