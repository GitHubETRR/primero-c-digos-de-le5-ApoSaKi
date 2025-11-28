#include <stdio.h>
#include <stdlib.h>
#define MaxLongitud 200

int Dimension(char Cadena[]);
int main() {
    char Texto[MaxLongitud];
    int LargoCadena;
    printf("Ingresa un texto: ");
    fgets(Texto, MaxLongitud, stdin);
    LargoCadena = Dimension(Texto);
    printf("La longitud de la cadena es: %d\n", LargoCadena);
    return 0;
}

int Dimension(char Cadena[]) {
    int Contador = 0;
    while (Cadena[Contador] != '\0') {
        Contador++;
    }
    return Contador;
}

