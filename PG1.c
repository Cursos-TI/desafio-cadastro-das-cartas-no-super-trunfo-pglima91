#include <stdio.h>

int main(){

    int idade;
    int renda;


    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: ");
    scanf("%d", &renda);

    if (idade <= 18 || idade >= 60)
    {
        if (renda < 2000)
        {
            printf("Você tem direito ao desconto!\n");
        } else {
            printf("Você não tem direiro ao desconto devido a renda");
        }
        printf("Aceito com relação a idade");
    
    } else {
        printf("Você não atende aos criterios");
    }






}