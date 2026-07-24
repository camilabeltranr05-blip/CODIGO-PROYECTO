#include <stdio.h>

// Definimos constantes para el tamano de la matriz
#define NUM_AMIGOS 9
#define NUM_PREGUNTAS 8

// Matriz global
// Orden de columnas: Femenino(0), Tinturado(1), Rizado(2), Largo(3), Flequillo(4), Piel(5), Lentes(6), Foraneo(7)
// El numero '2' actua como comodin (no importa la respuesta)
int matrizPersonajes[NUM_AMIGOS][NUM_PREGUNTAS] = {
    {1, 0, 0, 0, 0, 1, 2, 0}, // [0] CAMILA
    {1, 0, 0, 1, 0, 0, 2, 0}, // [1] LISSETTE
    {1, 1, 1, 0, 0, 1, 2, 0}, // [2] ALISON
    {1, 1, 0, 1, 0, 1, 2, 1}, // [3] LADY
    {1, 1, 0, 1, 0, 0, 2, 0}, // [4] JOSSELIN
    {0, 0, 0, 0, 0, 0, 0, 0}, // [5] JHOAN
    {0, 0, 1, 0, 0, 0, 0, 1}, // [6] ABRAHAM
    {0, 0, 0, 0, 0, 1, 1, 1}, // [7] WILLY
    {0, 0, 0, 0, 0, 0, 1, 1}  // [8] MATIAS
};

// Arreglo de nombres para imprimir el resultado
const char* nombresAmigos[NUM_AMIGOS] = {
    "CAMILA", "LISSETTE", "ALISON", "LADY", "JOSSELIN",
    "JHOAN", "ABRAHAM", "WILLY", "MATIAS"
};


// FUNCIONES

void evaluarPersonajeDidactico(int respuestas[]);
int preguntar(const char* pregunta);
void imprimirDibujoAmigo(int indiceAmigo);
void pausar(void);


// FUNCION PRINCIPAL (MAIN)

int main() {
    int opcionMenu;
    int esValidoMenu;
    int respuestas[NUM_PREGUNTAS]; // Arreglo para almacenar las 8 respuestas

    do {
        // Encabezado sin colores ni caracteres especiales con tildes
        printf("===================================================\n");
        printf("       * KATABOOM DE AMIGOS: EDICION ESPECIAL *    \n");
        printf("===================================================\n\n");

        printf(" Hola! Soy el genio KATABOOM. Piensa en uno de tus amigos:\n\n");

        printf("   [1] Jhoan       [4] Alison      [7] Lady\n");
        printf("   [2] Abraham     [5] Lissette    [8] Matias\n");
        printf("   [3] Willy       [6] Camila      [9] Josselin\n\n");

        printf("---------------------------------------------------\n");
        printf(" Responde con la verdad usando 's' (Si) o 'n' (No)\n");
        printf("---------------------------------------------------\n\n");

        // Almacenamiento de respuestas directamente en el arreglo
        respuestas[0] = preguntar("Tu personaje es mujer?");
        respuestas[1] = preguntar("Tiene el cabello pintado o tinturado?");
        respuestas[2] = preguntar("Su cabello es rizado u ondulado?");
        respuestas[3] = preguntar("Tiene el cabello largo (mas abajo de los hombros)?");
        respuestas[4] = preguntar("Lleva flequillo cubriendole la frente?");
        respuestas[5] = preguntar("Tiene la piel clara?");
        respuestas[6] = preguntar("Acaso usa lentes o gafas?");
        respuestas[7] = preguntar("Tu personaje es foraneo?");

        printf("\n---------------------------------------------------\n");
        printf(" AHA! Leyendo tu mente y evaluando la matriz...\n");
        printf(" Presiona ENTER para iniciar la deduccion didactica...");
        pausar();
        printf("---------------------------------------------------\n");

        // Llamada a la funcion modular encargada de evaluar la matriz de forma didactica
        evaluarPersonajeDidactico(respuestas);

        printf("---------------------------------------------------\n\n");

        // Validacion do-while e if-else estricta para el menu de reinicio
        do {
            printf(" Adivine correctamente tu personaje?\n");
            printf("  1. Si! Eres un genio!\n");
            printf("  0. No, vamos a intentarlo de nuevo.\n");
            printf(" -> Ingrese su opcion (1 o 0): ");
            
            if (scanf("%d", &opcionMenu) != 1) {
                // Si meten un caracter no numerico, limpiamos el buffer para evitar bucle infinito
                while(getchar() != '\n');
                printf("error dato ingresado\n\n");
                esValidoMenu = 0;
            } 
            else if (opcionMenu == 1 || opcionMenu == 0) {
                esValidoMenu = 1;
            } 
            else {
                printf("error dato ingresado\n\n");
                esValidoMenu = 0;
            }
        } while (esValidoMenu == 0);

        if (opcionMenu == 1) {
            // La carita feliz grande y el mensaje se imprimen aquí al final cuando el usuario ingresa 1
            printf("\n Ja! Sabia que no fallaria!\n");
            printf("  ¡LO ADIVINE!\n");
            printf("      ^___^\n");
            printf("     ( o.o )\n");
            printf("      > ^ <\n\n");
        } else {
            printf("\n Dejame concentrarme mejor esta vez...\n");
            printf("      o___o\n");
            printf("     ( -.- )\n");
            printf("      /   \\\n\n");
        }

    } while (opcionMenu == 0);

    printf("===================================================\n");
    printf("     GRACIAS POR JUGAR CON KATABOOM!\n");
    printf("===================================================\n");

    return 0;
}


// DEFINICION DE FUNCIONES


// Funcion que imprime un dibujo diferente y personalizado para cada amigo
void imprimirDibujoAmigo(int indiceAmigo) {
    switch (indiceAmigo) {
        case 0: // CAMILA
            printf("       . *  . \n");
            printf("     (  \\o/  )\n");
            printf("      (  v  )    [CAMILA]\n");
            printf("       `---'\n");
            break;
        case 1: // LISSETTE
            printf("      /\\___/\\\n");
            printf("     (  >_<  )\n");
            printf("      >  ^  <    [LISSETTE]\n");
            printf("     /_______\\\n");
            break;
        case 2: // ALISON
            printf("       ( * )\n");
            printf("     {  (O)  }   [ALISON]\n");
            printf("      (  _  )\n");
            printf("       `---'\n");
            break;
        case 3: // LADY
            printf("       _|_|_\n");
            printf("      (  o.o  )\n");
            printf("      /  ---  \\   [LADY]\n");
            printf("     /_______\\\n");
            break;
        case 4: // JOSSELIN
            printf("      _oo_oo_\n");
            printf("     (  >.<  )\n");
            printf("      (  v  )    [JOSSELIN]\n");
            printf("       `---'\n");
            break;
        case 5: // JHOAN
            printf("       _____ \n");
            printf("     /=====\\\n");
            printf("    (  o.o  )    [JHOAN]\n");
            printf("     \\  -  /\n");
            printf("      `---'\n");
            break;
        case 6: // ABRAHAM
            printf("      [ o o ]\n");
            printf("     (   v   )\n");
            printf("      (  _  )    [ABRAHAM]\n");
            printf("       `---'\n");
            break;
        case 7: // WILLY
            printf("      [O _ O]\n");
            printf("     (   w   )\n");
            printf("      /  -  \\    [WILLY]\n");
            printf("     /       \\\n");
            break;
        case 8: // MATIAS
            printf("      _..._\n");
            printf("     ( ^_^ )\n");
            printf("      \\ v /      [MATIAS]\n");
            printf("       `---'\n");
            break;
        default:
            printf("    ( Genio )\n");
            break;
    }
}

// Funcion que evalua la matriz de forma didactica (paso a paso mostrando descartes)
void evaluarPersonajeDidactico(int respuestas[]) {
    int encontrado = 0;

    printf("\n>>> PROCESO DE EVALUACION MATRICIAL <<<\n\n");

    for (int i = 0; i < NUM_AMIGOS; i++) {
        int coincideTodo = 1;

        printf(" Analizando fila [%d] (%-8s)... ", i, nombresAmigos[i]);

        for (int j = 0; j < NUM_PREGUNTAS; j++) {
            // Comparamos. Si hay un 2 en la matriz, ignoramos la validacion para esa pregunta
            if (matrizPersonajes[i][j] != 2 && matrizPersonajes[i][j] != respuestas[j]) {
                coincideTodo = 0;
                printf("[DESCARTADO] en Pregunta %d\n", j + 1);
                break; // Rompe el ciclo interno, pasa al siguiente amigo
            }
        }

        if (coincideTodo == 1) {
            printf("[COINCIDENCIA TOTAL!]\n\n");
            printf("===================================================\n");
            printf(" >>> Tu personaje es: %s! <<<\n", nombresAmigos[i]);
            printf("===================================================\n\n");
            
            // Imprimimos el dibujo correspondiente al amigo encontrado
            imprimirDibujoAmigo(i);
            
            encontrado = 1;
            break; // Rompe el ciclo externo porque ya lo encontro
        }
    }

    if (encontrado == 0) {
        printf("\n Vaya... No pude encontrar a nadie con esas caracteristicas.\n");
        printf(" Seguro que respondiste todas las preguntas correctamente?\n");
    }
}

// Funcion para hacer la pregunta individual y validar que sea 's' o 'n'
int preguntar(const char* pregunta) {
    char respuesta;
    int esValido;
    
    do {
        printf(" -> %s (s/n): ", pregunta);
        // El espacio antes de %c limpia saltos de linea anteriores en el buffer
        scanf(" %c", &respuesta); 
        
        if (respuesta == 's' || respuesta == 'n' || respuesta == 'S' || respuesta == 'N') {
            esValido = 1;
        } else {
            printf("error dato ingresado\n\n");
            esValido = 0;
        }
    } while (esValido == 0);
    
    if (respuesta == 's' || respuesta == 'S') {
        return 1;
    } else {
        return 0;
    }
}

// Funcion auxiliar para hacer una pausa limpia esperando que el usuario presione Enter
void pausar(void) {
    while (getchar() != '\n'); // Limpia cualquier sobrante en el buffer
    getchar();                 // Espera a que se presione Enter
}
