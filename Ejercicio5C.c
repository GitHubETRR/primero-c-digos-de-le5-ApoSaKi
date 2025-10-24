#include <stdio.h>

#define TAM 3   // tamaño del vector

int productoEscalar(int a[], int b[], int tam);

int main() {
    int A[TAM];
    int B[TAM];
    int i;
    int resultado;

    printf("Ingrese los elementos del vector A:\n");
    for(i = 0; i < TAM; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nIngrese los elementos del vector B:\n");
    for(i = 0; i < TAM; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    resultado = productoEscalar(A, B, TAM);

    printf("\nEl producto escalar de los vectores es: %d\n", resultado);

    return 0;
}

int productoEscalar(int a[], int b[], int tam) {
    int i;
    int suma = 0;

    for(i = 0; i < tam; i++) {
        suma += a[i] * b[i];
    }

    return suma;
}
