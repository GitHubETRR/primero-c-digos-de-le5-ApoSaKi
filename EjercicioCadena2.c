#include <stdio.h>
#include <stdlib.h>

#define MaxLongitud 200
#define MayusInicio 'A'
#define MayusFin 'Z'
#define DifMayusMinus ('a' - 'A')

void PasaMinuscula(char Cadena[]);

int main() {
    int Seguir;
    do{
        char Texto[MaxLongitud];
        printf("Ingrese un texto: ");
        fgets(Texto, MaxLongitud, stdin);
        PasaMinuscula(Texto);
        printf("Texto en minuscula: %s\n", Texto);
        printf("¿Quieres seguir?(1 para si y cualquier otro numero para no)");
        scanf("%d", &Seguir);
    }while(Seguir==1);
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
