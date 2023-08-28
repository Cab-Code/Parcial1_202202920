#include <stdio.h>
#include <stdlib.h>

int main(){
    int op = 0;
    int dado = 0;
    float ganancia = 0;
    int ciclo = 0;

   while(ciclo == 0){
    printf("\n----------------------------------\n");
    printf(" 1) Jugar ------------------------\n");
    printf(" 2) Salir ------------------------\n");
    printf("----------------------------------\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            FILE *archivo = fopen("salida.txt", "w");
            if (archivo == NULL) {
                printf("No se pudo abrir el archivo.\n");
                return 1;
            }
            fprintf(archivo, "----------------------\n");
            fprintf(archivo, "-------- Juego -------\n");
            fprintf(archivo, "intentos:\n");

            while (dado != 8 || dado != 7)
            {
                 dado = rand() % 12;
                if(dado >= 1){
                    printf("El tiro del dado ha sido %d\n", dado);
                    fprintf(archivo, "-  %d\n", dado);

                }
                if(dado == 8){
                    break;
                }
                if(dado == 7){
                    break;
                }
            }
            switch (dado)
            {
            case 7:
                printf("La lamentamos mucho has perdido");
                fprintf(archivo, " - %d -Derrota", dado);
                break;
            case 8:
                 printf("Felicidades has ganado");
                fprintf(archivo, "------- %d - Victoria-------\n", dado);
                break;
            
            default:
                break;
            }
            

            fclose(archivo);
            break;
        case 2:
            printf("Cerrando programa...");
            ciclo = 4;
            break;
        
        default:
            printf("Ingrese una opcion valida\n");
            printf("...\n \n");
            break;
        }

   }


}