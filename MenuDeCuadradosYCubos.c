#include <stdio.h>

// Prototipos de funciones
int ListaDeCuadrados(int CantCuadrados);
int ListaDeCubos(int CantCubos);

int main() {
    int Eleccion;
    printf("\aHola, este es un programa dedicado a la matemática, selecciona una de las siguientes opciones para continuar\n");
    
    do {
        printf("\n Lista de Cuadrados Perfectos (presione 1)\n Lista de Cubos Perfectos (presione 2)\n Salir del programa (presione 3)\n");
        scanf("%d", &Eleccion);

        switch(Eleccion) {
            case 1:
                ListaDeCuadrados(0);
                break;
            case 2:
                ListaDeCubos(0);
                break;
            case 3:
                return 0;
            default:
                printf("Vuelve a intentarlo una vez más\n");
                getchar(); 
                getchar();
                break;
        }
    } while(Eleccion != 3);

    return 0;
}

int ListaDeCuadrados(int CantCuadrados) {
    int VecesCuadrados = 1;
    printf("Indique la cantidad de cuadrados perfectos que quiere ver en la lista: ");
    scanf("%d", &CantCuadrados);

    printf("\nCuadrados perfectos:\n");
    do {
        printf("%d\n", VecesCuadrados * VecesCuadrados);
        VecesCuadrados++;
        CantCuadrados--;
    } while (CantCuadrados > 0);

    return 0;
}

int ListaDeCubos(int CantCubos) {
    printf("Indique la cantidad de cubos perfectos que quiere ver en la lista: ");
    scanf("%d", &CantCubos);

    printf("\nCubos perfectos:\n");
    for (int i = 1; i <= CantCubos; i++) {
        printf("%d\n", i * i * i);
    }

    return 0;
}
