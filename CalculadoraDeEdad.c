#include <stdio.h>
#include <stdlib.h>

int diasEnMes(int mes, int anio) {
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) return 31;
    if (mes==4 || mes==6 || mes==9 || mes==11) return 30;
    // Febrero
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) return 29;
    return 28;
}

int main(){
    int DiaActual, MesActual, AnioActual;
    int DiaNac, MesNac, AnioNac;
    int EdadDia, EdadMes, EdadAnio;
    int Confirmacion;

    do {
        printf("Hola, este es un programa para calcular la edad de las personas según el calendario gregoriano\n");
        printf("Ingrese la fecha actual (DD MM AAAA): ");
        scanf("%d %d %d", &DiaActual, &MesActual, &AnioActual);

        printf("Ingrese su fecha de nacimiento (DD MM AAAA): ");
        scanf("%d %d %d", &DiaNac, &MesNac, &AnioNac);

        // Calcular edad
        EdadAnio = AnioActual - AnioNac;
        EdadMes  = MesActual - MesNac;
        EdadDia  = DiaActual - DiaNac;

        if (EdadDia < 0) {
            EdadMes--;
            EdadDia += diasEnMes((MesActual == 1 ? 12 : MesActual - 1),
                                 (MesActual == 1 ? AnioActual - 1 : AnioActual));
        }

        if (EdadMes < 0) {
            EdadAnio--;
            EdadMes += 12;
        }

        printf("\nTienes %d años, %d meses y %d días\n", EdadAnio, EdadMes, EdadDia);

        // Calcular tiempo hasta el próximo cumpleaños
        int proximoAnio = AnioActual;
        if (MesActual > MesNac || (MesActual == MesNac && DiaActual > DiaNac)) {
            proximoAnio++;
        }

        int MesesRest = MesNac - MesActual;
        int DiasRest  = DiaNac - DiaActual;

        if (DiasRest < 0) {
            MesesRest--;
            DiasRest += diasEnMes((MesActual == 12 ? 1 : MesActual + 1), proximoAnio);
        }

        if (MesesRest < 0) {
            MesesRest += 12;
        }

        if (MesesRest == 0 && DiasRest == 0) {
            printf("🎉 ¡Feliz cumpleaños amigo, que disfrutes tu día! 🎉\n");
        } else {
            printf("Para tu próximo cumpleaños faltan %d meses y %d días\n", MesesRest, DiasRest);
        }

        printf("\n¿Quieres probar con otra fecha? (1 = sí): ");
        scanf("%d", &Confirmacion);

    } while (Confirmacion == 1);

    return 0;
}
