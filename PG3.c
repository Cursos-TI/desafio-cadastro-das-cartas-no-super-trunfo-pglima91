#include <stdio.h>

int main(){

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero > 0){
        if(numero % 2 ==0)
        {
            printf("numero par\n");
        } else {
            printf("numero impar\n");
        }
        printf("Positivo");
    }        else if(numero == 0){
        printf("numero é zero\n");
    }
        else {
            printf("Numero negativo\n");
    }
   

}