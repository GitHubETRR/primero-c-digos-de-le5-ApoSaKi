#include <stdio.h>
#include <string.h>

#define MaxLongitud 200

void Invertir(char origen[], char destino[]);

int main() {
    char Texto[MaxLongitud];
    char Invertido[MaxLongitud];
    int Seguir;

    do {
        fflush(stdin);
        printf("Ingrese un texto: ");
        fgets(Texto, MaxLongitud, stdin);
        Invertir(Texto, Invertido);
        printf("Texto invertido: %s\n", Invertido);
        printf("¿Quieres seguir? (1 para sí, otro número para no): ");
        scanf("%d", &Seguir);
        getchar();
    } while (Seguir == 1);
    return 0;
}
void Invertir(char origen[], char destino[]) {
    int len = strlen(origen);
    if (origen[len - 1] == '\n') {
        origen[len - 1] = '\0';
        len--;
    }
    for (int i = 0; i < len; i++) {
        destino[i] = origen[len - 1 - i];
    }
    destino[len] = '\0';
}
