#include <stdio.h>
#include <stdlib.h>

int main(){
    int  ciclo = 0;
    int op = 0;
    char nombre[100];
    char apellido[100];
    char clase[100];
    float nota;
    int n = 0;


   while(ciclo == 0){
    printf("\n----------------------------------\n");
    printf(" 1) Ingresar nuevo estudiante ----\n");
    printf(" 2) ver historial ----------------\n");
    printf(" 3) Borrar historial--------------\n");
    printf(" 4) Salir ------------------------\n");
    printf("----------------------------------\n");
        scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Ingrese el nombre del alumno:\n");
            scanf("%s %s", nombre, apellido);

         FILE *archivo = fopen("historial.txt", "a");
                if (archivo == NULL) {
                    printf("No se pudo abrir el archivo para escribir.\n");
                    return 1; 
                }
        fprintf(archivo, "-------------------------------\n");
        fprintf(archivo, "-------------------------------\n");
        fprintf(archivo, "Nombre: %s %s\n", nombre, apellido);
        fprintf(archivo, "Notas: \n");

        printf("Cuantas notas va a ingresar?\n");
            scanf("%d", &n);
        int i;
        for(i = 0; i <= n; i++){
            printf("Ingrese el nombre de la materia y la nota (separado por dos puntos ':'\n");
                scanf("%s:%f", clase, nota);
            fprintf(archivo, "   %s %.3f\n", clase, nota);
        }
        fclose(archivo);


        break;
    case 2:
         printf("Notas:\n");
            char lectura[100]; 
             FILE *archivoL = fopen("historial.txt", "r");
                if (archivoL == NULL) {
                    printf("No se pudo abrir el archivo para escribir.\n");
                    return 1;
                }
                while (fgets(lectura, 100, archivoL) != NULL) {
                    
                    printf("%s", lectura); 
                }
                fclose(archivoL);

                break;
        break;
    case 3:
        FILE *archivoB = fopen("historial.txt", "w");
                if (archivoB == NULL) {
                    printf("No se pudo abrir el archivo para escribir.\n");
                    return 1;
                }
            fprintf(archivo, " ");

        break;
    case 4:
        printf("\n Cerrando programa ...");
        ciclo = 4;
        break;
    default:
        printf("\n ingrese una opcion valida ...");

        break;
    }

   }
}