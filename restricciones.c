#include <stdio.h>
#include <string.h>

// Definición de estructura para almacenar las características de cada personaje
typedef struct {
    char nombre[30];
    int cabello_oscuro;   // 1: Sí, 0: No (Rubio/Claro)
    int cabello_largo;    // 1: Largo, 0: Corto
    int piel_clara;       // 1: Clara, 0: Morena/Oscura
    int alta;             // 1: Alta, 0: Baja/Media
    int extrovertida;     // 1: Extrovertida/Energética, 0: Tranquila/Seria
    int facilidad_exponer;// 1: Se le facilita, 0: Le cuesta
    int se_maquilla;      // 1: Sí, 0: No
    int estilo_formal;    // 1: Formal/Elegante, 0: Casual/Informal
} Personaje;

// Funciones de preguntas por característica (Devuelven 1 o 0 según la respuesta del usuario)
int preguntar_cabello_oscuro() {
    char respuesta;
    do{
        printf("¿El personaje tiene el cabello oscuro/negro/castaño oscuro? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' ){
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
        
    } while(respuesta != 's' && respuesta != 'n');
    return (respuesta == 's' || respuesta == 'S');

    
}

int preguntar_cabello_largo() {
    char respuesta;
    do{
        printf("¿El personaje tiene el cabello largo? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' ){
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
        
    } while(respuesta != 's' && respuesta != 'n');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntar_piel_clara() {
    char respuesta;
    do{
        printf("¿El personaje tiene tez clara? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' ){
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
        
    } while(respuesta != 's' && respuesta != 'n');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntar_altura() {
    char respuesta;
    do{
        printf("¿El personaje es considerado alto/a (o de estatura alta)? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' ){
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
        
    } while(respuesta != 's' && respuesta != 'n');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntar_personalidad() {
    char respuesta;
    do{
        printf("¿El personaje tiene una personalidad muy extrovertida y energica? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' ){
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
        
    } while(respuesta != 's' && respuesta != 'n');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntar_facilidad_exponer() {
    char respuesta;
    do{
        printf("¿Tiene facilidad para hablar en público o exponer? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' ){
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
        
    } while(respuesta != 's' && respuesta != 'n');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntar_se_maquilla() {
    char respuesta;
    do{
        printf("¿El personaje suele maquillarse con frecuencia? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' ){
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
        
    } while(respuesta != 's' && respuesta != 'n');
    return (respuesta == 's' || respuesta == 'S');
}

int preguntar_estilo_vestir() {
    char respuesta;
    do{
        printf("¿Su estilo al vestir tiende a ser formal o elegante? (s/n): ");
        scanf(" %c", &respuesta);
        if (respuesta != 's' && respuesta != 'n' ){
            printf("\n ERROR EN LA RESPUESTA INGRESADA, VUELTA A INTENTAR\n");
        }
        
    } while(respuesta != 's' && respuesta != 'n');
    return (respuesta == 's' || respuesta == 'S');
}

// Función principal del juego
int main() {
    // Definimos la base de datos con 9 personajes femeninos y sus atributos
    Personaje personajes[9] = {
        {"Sofia",     1, 1, 1, 0, 1, 1, 1, 1}, // Cabello oscuro, largo, piel clara, baja, extrovertida, facilidad exponer, se maquilla, formal
        {"Valentina", 0, 1, 1, 1, 1, 1, 0, 0}, // Cabello claro, largo, piel clara, alta, extrovertida, facilidad exponer, no se maquilla, casual
        {"Camila",    1, 0, 0, 0, 0, 0, 1, 0}, // Cabello oscuro, corto, piel morena, baja, tranquila, le cuesta exponer, se maquilla, casual
        {"Lucia",     0, 0, 1, 0, 0, 0, 0, 0}, // Cabello claro, corto, piel clara, baja, tranquila, le cuesta exponer, no se maquilla, casual
        {"Mariana",   1, 1, 0, 1, 1, 1, 1, 1}, // Cabello oscuro, largo, piel morena, alta, extrovertida, facilidad exponer, se maquilla, formal
        {"Elena",     0, 1, 1, 1, 0, 0, 1, 1}, // Cabello claro, largo, piel clara, alta, tranquila, le cuesta exponer, se maquilla, formal
        {"Carla",     1, 0, 1, 1, 1, 0, 0, 0}, // Cabello oscuro, corto, piel clara, alta, extrovertida, le cuesta exponer, no se maquilla, casual
        {"Daniela",   0, 0, 0, 0, 1, 1, 1, 0}, // Cabello claro, corto, piel morena, baja, extrovertida, facilidad exponer, se maquilla, casual
        {"Gabriela",  1, 1, 0, 1, 0, 1, 0, 1}  // Cabello oscuro, largo, piel morena, alta, tranquila, facilidad exponer, no se maquilla, formal
    };

    printf("=========================================\n");
    printf("   ¡BIENVENIDO AL AKINATOR DE MUJERES!   \n");
    printf("=========================================\n");
    printf("Piensa en uno de estos 9 personajes:\n");
    printf("Sofia, Valentina, Camila, Lucia, Mariana, Elena, Carla, Daniela, Gabriela.\n\n");
    printf("Responde con 's' para Si o 'n' para No.\n-----------------------------------------\n\n");

    // Recopilamos las respuestas del usuario llamando a cada función de característica
    int resp_cabello_oscuro = preguntar_cabello_oscuro();
    int resp_cabello_largo  = preguntar_cabello_largo();
    int resp_piel_clara     = preguntar_piel_clara();
    int resp_altura         = preguntar_altura();
    int resp_personalidad   = preguntar_personalidad();
    int resp_facilidad      = preguntar_facilidad_exponer();
    int resp_maquillaje     = preguntar_se_maquilla();
    int resp_estilo         = preguntar_estilo_vestir();

    // Buscamos el personaje que coincida exactamente con las respuestas
    int encontrado = -1;
    for (int i = 0; i < 9; i++) {
        if (personajes[i].cabello_oscuro == resp_cabello_oscuro &&
            personajes[i].cabello_largo == resp_cabello_largo &&
            personajes[i].piel_clara == resp_piel_clara &&
            personajes[i].alta == resp_altura &&
            personajes[i].extrovertida == resp_personalidad &&
            personajes[i].facilidad_exponer == resp_facilidad &&
            personajes[i].se_maquilla == resp_maquillaje &&
            personajes[i].estilo_formal == resp_estilo) {
            encontrado = i;
            break;
        }
    }

    // Mostramos el resultado del juego
    printf("\n-----------------------------------------\n");
    if (encontrado != -1) {
        printf("¡Akinator ha pensado... Tu personaje es: **%s**!\n", personajes[encontrado].nombre);
    } else {
        printf("¡Mmm! No pude adivinar el personaje exacto con las combinaciones proporcionadas. ¿Quizas hubo un error en las respuestas?\n");
    }
    printf("=========================================\n");

    return 0;
}
