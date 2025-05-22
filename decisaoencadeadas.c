#include <stdio.h>

int main(){

int idade;

printf("Digite a sua idade: ");
scanf("%d", &idade);

//criança < 12
//adolescente 12 <= x < 18
//adulto 18 <= x < 60
//idoso > 60

if (idade < 12){
    printf("Voce é uma criança");
} else if(idade >= 12 && idade < 18){
    printf("voce é um adolescente!\n");
} else if(idade >= 18 && idade < 60){
    printf("Voce é um adulto!\n");
} else {
    printf("Você é um idoso\n");
}

}

