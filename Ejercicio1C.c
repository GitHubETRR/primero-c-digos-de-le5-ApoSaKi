#include <stdio.h>

int sumarVector(int vector[], int tam);

int main() {
    int n, i;

    // Se define el tamaño del vector
    printf("Ingrese la cantidad de elementos del vector: ");
    scanf("%d", &n);

    int numeros[n];

    // Se cargan los datos del vector
    for(i = 0; i < n; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &numeros[i]);
    }

    // Se muestra el resultado
    int suma = sumarVector(numeros, n);
    printf("\nLa suma de los elementos del vector es: %d\n", suma);

    return 0;
}

// Funcion
int sumarVector(int vector[], int tam) {
    int suma = 0, i;
    for(i = 0; i < tam; i++) {
        suma += vector[i];
    }
    return suma;
}

