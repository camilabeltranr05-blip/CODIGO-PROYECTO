#include <stdio.h>

// Funciones de preguntas con UN SOLO getchar() directo
int preguntarGeneroFemenino() {
    char respuesta;
    do {
        printf("Es mujer? (s/n): ");
        respuesta = getchar();

        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELVA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntarCabelloTinturado() {
    char respuesta;
    do {
        printf("Tiene el cabello pintado o tinturado de algun color? (s/n): ");
        respuesta = getchar();

        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELVA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntarCabelloRizado() {
    char respuesta;
    do {
        printf("Tiene el cabello rizado o ondulado? (s/n): ");
        respuesta = getchar();

        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELVA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntarCabelloLargo() {
    char respuesta;
    do {
        printf("Tiene el cabello largo (pasando los hombros)? (s/n): ");
        respuesta = getchar();

        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELVA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntarUsaFlequillo() {
    char respuesta;
    do {
        printf("Tiene flequillo en la frente? (s/n): ");
        respuesta = getchar();

        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELVA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntarPielClara() {
    char respuesta;
    do {
        printf("Tiene la piel clara? (s/n): ");
        respuesta = getchar();

        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELVA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

int main() {
    int opcionMenu = 0;

    do {
        // Menu de inicio
        printf("\n===================================================\n");
        printf("          * AKINATOR DE AMIGOS *                   \n");
        printf("===================================================\n");
        printf(" Piensa en uno de los siguientes personajes:\n\n");
        printf("   [1] Jhoan       [4] Alison      [7] Lady\n");
        printf("   [2] Abraham     [5] Lissette    [8] Matias\n");
        printf("   [3] Wili        [6] Camila      [9] Josselin\n");
        printf("---------------------------------------------------\n");
        printf(" Responde cada pregunta con 's' (Si) o 'n' (No)\n");
        printf("---------------------------------------------------\n\n");

        int rFemenino   = preguntarGeneroFemenino();
        int rTinturado  = preguntarCabelloTinturado();
        int rRizado     = preguntarCabelloRizado();
        int rLargo      = preguntarCabelloLargo();
        int rFlequillo  = preguntarUsaFlequillo();
        int rPiel       = preguntarPielClara();

        printf("\n---------------------------------------------------\n");

        // Evaluacion por condicionales simples
        if (rFemenino == 1 && rTinturado == 0 && rRizado == 1 && rLargo == 1 && rFlequillo == 0 && rPiel == 0) {
            printf(" Akinator ha pensado...\n Tu personaje es: Camila\n");
        } 
        else if (rFemenino == 1 && rTinturado == 0 && rRizado == 0 && rLargo == 1 && rFlequillo == 0 && rPiel == 0) {
            printf(" Akinator ha pensado...\n Tu personaje es: Lissette\n");
        } 
        else if (rFemenino == 1 && rTinturado == 0 && rRizado == 1 && rLargo == 1 && rFlequillo == 0 && rPiel == 1) {
            printf(" Akinator ha pensado...\n Tu personaje es: Alison\n");
        } 
        else if (rFemenino == 1 && rTinturado == 1 && rRizado == 0 && rLargo == 1 && rFlequillo == 0 && rPiel == 1) {
            printf(" Akinator ha pensado...\n Tu personaje es: Lady\n");
        } 
        else if (rFemenino == 1 && rTinturado == 1 && rRizado == 0 && rLargo == 1 && rFlequillo == 0 && rPiel == 0) {
            printf(" Akinator ha pensado...\n Tu personaje es: Josselin\n");
        } 
        else if (rFemenino == 0 && rTinturado == 0 && rRizado == 0 && rLargo == 0 && rFlequillo == 1 && rPiel == 0) {
            printf(" Akinator ha pensado...\n Tu personaje es: Jhoan\n");
        } 
        else if (rFemenino == 0 && rTinturado == 0 && rRizado == 1 && rLargo == 0 && rFlequillo == 0 && rPiel == 0) {
            printf(" Akinator ha pensado...\n Tu personaje es: Abraham\n");
        } 
        else if (rFemenino == 0 && rTinturado == 0 && rRizado == 0 && rLargo == 0 && rFlequillo == 0 && rPiel == 1) {
            printf(" Akinator ha pensado...\n Tu personaje es: Wili\n");
        } 
        else if (rFemenino == 0 && rTinturado == 0 && rRizado == 0 && rLargo == 0 && rFlequillo == 1 && rPiel == 1) {
            printf(" Akinator ha pensado...\n Tu personaje es: Matias\n");
        } 
        else {
            printf(" No pude adivinar el personaje exacto con\n");
            printf(" las combinaciones proporcionadas.\n");
        }

        printf("---------------------------------------------------\n\n");

        // Pregunta final
        printf("Tu personaje es correcto?\n");
        printf("  1. Si, es correcto\n");
        printf("  0. Intentar de nuevo\n");
        printf("Ingrese su opcion (1 o 0): ");
        scanf("%d", &opcionMenu);

        while (opcionMenu != 1 && opcionMenu != 0) {
            printf("\n OPCION INVALIDA. Ingrese 1 para confirmar o 0 para intentar de nuevo: ");
            scanf("%d", &opcionMenu);
        }

        if (opcionMenu == 1) {
            printf("\n Genial! Adivine tu personaje. (^_^) \n");
        }

    } while (opcionMenu == 0);

    printf("\n===================================================\n");
    printf("         GRACIAS POR JUGAR!\n");
    printf("===================================================\n");

    return 0;
}
