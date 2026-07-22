#include <stdio.h>
#include <string.h>

// Definicion de estructura para almacenar las caracteristicas de cada personaje
typedef struct {
    char nombre[30];
    int cabello_oscuro;      // 1: Oscuro, 0: Claro/Rubio/Rojo
    int cabello_largo;       // 1: Largo, 0: Corto
    int cabello_rizado;      // 1: Rizado/Ondulado, 0: Lacio
    int piel_clara;          // 1: Clara (Solo Alison y Wili), 0: Morena/Trigueña
    int usa_gafas;           // 1: Si, 0: No
    int usa_flequillo;       // 1: Si (Capul/Fleco), 0: No
    int es_alta;             // 1: Alta/o, 0: Baja/o o estatura pequeña
    int genero_femenino;     // 1: Mujer, 0: Hombre
} Personaje;

// Funciones de preguntas por caracteristica
int preguntar_cabello_oscuro() {
    char respuesta;
    do {
        printf("El personaje tiene el cabello oscuro/negro/castano? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntar_cabello_largo() {
    char respuesta;
    do {
        printf("El personaje tiene el cabello largo? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntar_cabello_rizado() {
    char respuesta;
    do {
        printf("El personaje tiene el cabello rizado u ondulado? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntar_piel_clara() {
    char respuesta;
    do {
        printf("El personaje tiene la piel de tez clara? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntar_usa_gafas() {
    char respuesta;
    do {
        printf("El personaje usa gafas o lentes? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntar_usa_flequillo() {
    char respuesta;
    do {
        printf("El personaje tiene flequillo cubriendo la frente? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntar_es_alta() {
    char respuesta;
    do {
        printf("El personaje es alto/a de estatura? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntar_genero_femenino() {
    char respuesta;
    do {
        printf("El personaje es de genero femenino / mujer? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N') {
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
    } while (respuesta != 's' && respuesta != 'n' && respuesta != 'S' && respuesta != 'N');
    return (respuesta == 's' || respuesta == 'S');
}

// Funcion principal del juego
int main() {
    // Base de datos de personajes actualizados
    Personaje personajes[9] = {
        {"Jhoan",      1, 0, 0, 0, 0, 1, 1, 0},
        {"Abraham",    1, 0, 1, 0, 0, 0, 1, 0},
        {"Wili",       1, 0, 0, 1, 1, 1, 1, 0},
        {"Alison",     1, 1, 1, 1, 0, 0, 1, 1},
        {"Lissette",   1, 1, 0, 0, 0, 0, 0, 1},
        {"Camila",     1, 1, 0, 0, 0, 0, 1, 1},
        {"Personaje7",  0, 0, 0, 0, 0, 0, 0, 0},
        {"Personaje8",  0, 0, 0, 0, 0, 0, 0, 0},
        {"Personaje9",  0, 0, 0, 0, 0, 0, 0, 0}
    };

    printf("+-----------------------------------------+\n");
    printf("|     BIENVENIDO AL AKINATOR DE AMIGOS    |\n");
    printf("+-----------------------------------------+\n\n");
    printf("Piensa en uno de estos personajes:\n");
    printf("  - Jhoan        - Abraham      - Wili\n");
    printf("  - Alison       - Lissette     - Camila\n");
    printf("  - Personaje7   - Personaje8   - Personaje9\n\n");
    printf("-------------------------------------------\n");
    printf(" Responde cada pregunta con 's' (Si) o 'n' (No)\n");
    printf("-------------------------------------------\n\n");

    // Recopilamos las respuestas del usuario
    int resp_cabello_oscuro     = preguntar_cabello_oscuro();
    int resp_cabello_largo      = preguntar_cabello_largo();
    int resp_cabello_rizado     = preguntar_cabello_rizado();
    int resp_piel_clara         = preguntar_piel_clara();
    int resp_usa_gafas          = preguntar_usa_gafas();
    int resp_usa_flequillo      = preguntar_usa_flequillo();
    int resp_es_alta            = preguntar_es_alta();
    int resp_genero_femenino    = preguntar_genero_femenino();

    // Buscamos coincidencia exacta
    int encontrado = -1;
    for (int i = 0; i < 9; i++) {
        if (personajes[i].cabello_oscuro      == resp_cabello_oscuro     &&
            personajes[i].cabello_largo       == resp_cabello_largo      &&
            personajes[i].cabello_rizado      == resp_cabello_rizado     &&
            personajes[i].piel_clara          == resp_piel_clara         &&
            personajes[i].usa_gafas           == resp_usa_gafas          &&
            personajes[i].usa_flequillo       == resp_usa_flequillo      &&
            personajes[i].es_alta             == resp_es_alta            &&
            personajes[i].genero_femenino     == resp_genero_femenino) {
            encontrado = i;
            break;
        }
    }

    // Mostramos el resultado
    printf("\n-------------------------------------------\n");
    if (encontrado != -1) {
        printf(" Akinator ha pensado...\n");
        printf(" Tu personaje es: %s\n", personajes[encontrado].nombre);
    } else {
        printf(" No pude adivinar el personaje exacto con\n");
        printf(" las combinaciones proporcionadas.\n");
        printf(" Quizas hubo un error en las respuestas?\n");
    }
    printf("-------------------------------------------\n");
    printf("+-----------------------------------------+\n");
    printf("|               FIN DEL PROGRAMA          |\n");
    printf("+-----------------------------------------+\n");

    return 0;
}
