#include <stdio.h>

int main() {
    int num, i, a, op, ciclo = 0;
    
    while (ciclo == 0)
    {
    printf("-----------------------\n");
    printf("1) Verificar numero----\n");
    printf("2) SAlir ---------------\n");
    printf("------------------------\n");
        scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Ingrese un numero: ");
         scanf("%d", &num);
    
        for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            a = 1;
            break;
        }
        }
    
        if (num == 1) {
            printf("1 no es un numero primo.\n");
        } else {
        if (a == 0)
            printf("%d es un numero primo.\n", num);
        else
            printf("%d no es un numero primo.\n", num);
        }
        break;
    case 2:
        printf("Cerrando programa...");
        ciclo = 4;
        break;
    default:
        printf("opcion invalida...");

        break;
    }
    
    
    }
    return 0;
}