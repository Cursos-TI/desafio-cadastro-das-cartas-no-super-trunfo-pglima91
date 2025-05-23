#include <stdio.h>

int main(){

    int idade;
    int renda;
    int dependentes;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    printf("Digite a sua renda mensal: ");
    scanf("%f",&renda);
    printf("Digite o numero de dependentes: ");
    scanf("%d",&dependentes);

    if(idade >=18 && idade < 65){
        if(renda < 3000){
            if(dependentes > 2)
            {
                printf("Voce atende a todos os criterios\n");
            } else {
                printf("Voce não atende ao criterio dependente\n");
            }
        } else {

            printf("Voce não atende ao criterio renda\n");
        }
    } else{
        printf("voce não atende ao criterio de idade\n");
    }



}
