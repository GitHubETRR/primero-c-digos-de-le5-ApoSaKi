#include <stdio.h>
#include <stdlib.h>

#define MaxLongitud 200
#define MayusInicio 'A'
#define MayusFin 'Z'
#define DifMayusMinus ('a' - 'A')

void PasaMinuscula(char Cadena[]);

int main() {
    char Texto[MaxLongitud];
    printf("Ingrese un texto: ");
    fgets(Texto, MaxLongitud, stdin);
    PasaMinuscula(Texto);
    printf("Texto en minuscula: %s\n", Texto);
    return 0;
}
void PasaMinuscula(char Cadena[]) {
    int Indice = 0;
    while (Cadena[Indice] != '\0') {
        if (Cadena[Indice] >= MayusInicio && Cadena[Indice] <= MayusFin) {
            Cadena[Indice] = Cadena[Indice] + DifMayusMinus;
        }
        Indice++;
    }

}


