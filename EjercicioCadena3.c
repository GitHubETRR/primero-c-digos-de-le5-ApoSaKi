#include <stdio.h>
#include <stdlib.h>

#define MaxLongitud 200
#define MayusInicio 'A'
#define MayusFin 'Z'
#define DifMayusMinus ('a' - 'A')

#define VocalA 'a'
#define VocalE 'e'
#define VocalI 'i'
#define VocalO 'o'
#define VocalU 'u'

void PasaMinuscula(char Cadena[]);
int Vocales(char Cadena[]);
void QuitarSaltoLinea(char Cadena[]);

int main() {
    char Texto[MaxLongitud];
    int CantidadVocales;
    printf("Ingrese un texto: ");
    fgets(Texto, MaxLongitud, stdin);
    QuitarSaltoLinea(Texto);
    PasaMinuscula(Texto);
    CantidadVocales = Vocales(Texto);
    printf("Texto en minuscula: %s\n", Texto);
    printf("Cantidad de vocales: %d\n", CantidadVocales);
    printf("¿Quieres seguir?(1 para si y cualquier otro numero para no)");
    scanf("%d", &Seguir);
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
int Vocales(char Cadena[]) {
    int Indice = 0;
    int Contador = 0;
    while (Cadena[Indice] != '\0') {
        if (Cadena[Indice] == VocalA ||
            Cadena[Indice] == VocalE ||
            Cadena[Indice] == VocalI ||
            Cadena[Indice] == VocalO ||
            Cadena[Indice] == VocalU) {
            Contador++;
        }
        Indice++;
    }
    return Contador;
}
void QuitarSaltoLinea(char Cadena[]) {
    int Indice = 0;
    while (Cadena[Indice] != '\0') {
        if (Cadena[Indice] == '\n') {
            Cadena[Indice] = '\0';
            break;
        }
        Indice++;
    }
}