//Proyecto de estacionamiento

#include <stdio.h>
#include <string.h>

int main() {
    // Bloque declarativo de variables
    char matricula[20], matriculaA[20] = "", matriculaB[20] = "", matriculaC[20] = "", matriculaD[20] = "", matriculaE[20] = "";
    int decision, a = 0, b = 0, c = 0, d = 0, e = 0;
    
    // Bloque de instrucciones
    do {
        printf("Ingrese el número correspondiente a lo que desea realizar: \n");
        printf("1. Registrar entrada de vehículo\n");
        printf("2. Registrar salida de vehículo\n");
        printf("3. Mostrar estado del estacionamiento\n");
        printf("4. Salir\n");
        printf("Opción: ");
        scanf("%d", &decision);

        switch (decision) {
            case 1: {
                if (a == 0) {
                    printf("Introduzca la matrícula del vehículo (Las letras van en mayúscula): ");
                    scanf("%s", matriculaA);
                    a = 1;
                    printf("Su vehículo ha sido registrado en el estacionamiento A.\n");
                } else if (b == 0) {
                    printf("Introduzca la matrícula del vehículo: ");
                    scanf("%s", matriculaB);
                    b = 1;
                    printf("Su vehículo ha sido registrado en el estacionamiento B.\n");
                } else if (c == 0) {
                    printf("Introduzca la matrícula del vehículo: ");
                    scanf("%s", matriculaC);
                    c = 1;
                    printf("Su vehículo ha sido registrado en el estacionamiento C.\n");
                } else if (d == 0) {
                    printf("Introduzca la matrícula del vehículo: ");
                    scanf("%s", matriculaD);
                    d = 1;
                    printf("Su vehículo ha sido registrado en el estacionamiento D.\n");
                } else if (e == 0) {
                    printf("Introduzca la matrícula del vehículo: ");
                    scanf("%s", matriculaE);
                    e = 1;
                    printf("Su vehículo ha sido registrado en el estacionamiento E.\n");
                } else {
                    printf("El estacionamiento está lleno, no hay espacios libres.\n");
                }
                break;
            }
            case 2: {
                printf("Introduzca la matrícula del vehículo que desea retirar (Las letras van en mayúscula): ");
                scanf("%s", matricula);
                
                if (strcmp(matricula, matriculaA) == 0) {
                    a = 0;
                    printf("Su vehículo ha salido del estacionamiento A.\n");
                } else if (strcmp(matricula, matriculaB) == 0) {
                    b = 0;
                    printf("Su vehículo ha salido del estacionamiento B.\n");
                } else if (strcmp(matricula, matriculaC) == 0) {
                    c = 0;
                    printf("Su vehículo ha salido del estacionamiento C.\n");
                } else if (strcmp(matricula, matriculaD) == 0) {
                    d = 0;
                    printf("Su vehículo ha salido del estacionamiento D.\n");
                } else if (strcmp(matricula, matriculaE) == 0) {
                    e = 0;
                    printf("Su vehículo ha salido del estacionamiento E.\n");
                } else {
                    printf("Error. Matrícula inválida. Escriba bien la matrícula del vehículo.\n");
                }
                break;
            }
            case 3: {
                if (a == 1) {
                    printf("Estacionamiento A: Ocupado por vehículo con matrícula: %s\n", matriculaA);
                } else {
                    printf("Estacionamiento A: Libre\n");
                }
                if (b == 1) {
                    printf("Estacionamiento B: Ocupado por vehículo con matrícula: %s\n", matriculaB);
                } else {
                    printf("Estacionamiento B: Libre\n");
                }
                if (c == 1) {
                    printf("Estacionamiento C: Ocupado por vehículo con matrícula: %s\n", matriculaC);
                } else {
                    printf("Estacionamiento C: Libre\n");
                }
                if (d == 1) {
                    printf("Estacionamiento D: Ocupado por vehículo con matrícula: %s\n", matriculaD);
                } else {
                    printf("Estacionamiento D: Libre\n");
                }
                if (e == 1) {
                    printf("Estacionamiento E: Ocupado por vehículo con matrícula: %s\n", matriculaE);
                } else {
                    printf("Estacionamiento E: Libre\n");
                }
                break;
            }
            case 4: {
                printf("Saliendo del sistema...\n");
                break;
            }
            default: {
                printf("Error. Introduzca un número válido.\n");
                break;
            }
        }
    } while (decision != 4);
    
    return 0;
}
