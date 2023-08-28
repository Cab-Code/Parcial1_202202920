#include <stdio.h>
#include <math.h>

int main(){
    float notaAct[100];
    int n = 0;
    float suma = 0;
    float min = 100;
    float max = 0;
    float media = 0;
    float mediana = 0;
    
    printf("¿cuantas notas desea ingresar?\n");
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            printf("Ingresa una nota\n");
            scanf("%f", &notaAct[i]);
        }

        for(int i = 0; i < n; i++){
            printf(" %.2f ", notaAct[i]);

        }

        for(int i = 0; i < n; i++){
            if(notaAct[i] < min){
                min = notaAct[i];
            }
            if(notaAct[i] > max){
                max = notaAct[i];
            }

        }
        printf("\nRango min: %.2f max: %.2f",min,max);

        for (int i = 0; i < 100; i++)
        {
            if(notaAct[i] > 0){
                suma = suma + notaAct[i];
            }
        }
        media =(min + max) / 2;
        printf("\nmedia: %.2f", media);

        if (n % 2 == 0) {
            mediana = notaAct[n/2 - 1];
        } else {
            mediana = notaAct[n/2];
        }

        printf("\nmediana: %.2f", mediana);

        float sumaM = 0;

        for (int i = 0; i < n; i++)
        {
            if(notaAct[i] > 0){
                sumaM = sumaM + (notaAct[i] - media) * (notaAct[i] - media);


            }
        }

        float desviacion = sqrt(sumaM/n-1);
        float varianza = sumaM/n-1;

        printf("\ndesviacion estandar: %.2f", desviacion);
        printf("\nvarianza: %.2f", varianza);
        
}