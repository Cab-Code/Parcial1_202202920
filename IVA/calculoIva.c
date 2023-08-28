#include <stdio.h>

int main(){
    int op = 0;
    float precio = 0.0;
    float iva = 0.0;
    int ciclo = 0;
     while(ciclo == 0){
        printf("\n----------------------------------\n");
        printf(" 1) Calcular IVA--------------------\n");
        printf(" 2) Salir --------------------------\n");
        printf("------------------------------------\n");
            scanf("%d", &op);
        switch(op){
            case 1:
            printf("Ingrese el precio de un producto \n");
            printf("Q.");
                scanf("%f", &precio);
            iva = precio * 0.12;
            precio = precio - iva;

            FILE *archivo = fopen("salida.txt", "w");
            if (archivo == NULL) {
                printf("No se pudo abrir el archivo.\n");
                return 1;
            }
            fprintf(archivo, "----------------------\n");
            fprintf(archivo, "--------  IVA  -------\n");
            fprintf(archivo, "IVA: %f     -   PRECIO: %F\n",iva,precio);


            printf("\n EL IVA ES: %.2F \n", iva);
            printf("\n EL PRECIO ORIGINAL ES: %.2F \n", precio);
            fclose(archivo);

            break;

            case 2:
            printf("Cerrando El programa...");
            ciclo = 4;

            break;

            default:
            printf("Ingrese una opcion valida...\n");
            break;

        }
            

     }
}