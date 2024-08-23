#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    
    char nome[50];
    int idade; 
    char esporte[50];
    float altura;

} atleta;

int main(){

    atleta vet_Atletas[5], mais_Velho, mais_Alto;

            for(int i = 0; i < 5; i++){

            printf("\nInsira seu nome: ");
            fgets (vet_Atletas[i].nome,sizeof(vet_Atletas[i].nome), stdin);
            printf("Insira seu esporte: ");
            fgets (vet_Atletas[i].esporte,sizeof(vet_Atletas[i].esporte), stdin);
            printf("Insira sua idade: ");
            scanf ("%d", &vet_Atletas[i].idade); getchar();
            printf("Insira sua altura: ");
            scanf ("%f", &vet_Atletas[i].altura); getchar();

            }

    mais_Alto = vet_Atletas[0];
    mais_Velho = vet_Atletas[0];

            for(int i = 0; i < 5; i++){

                    if(vet_Atletas[i].idade > mais_Velho.idade){

                    mais_Velho = vet_Atletas[i]; 

                    }

                    if(vet_Atletas[i].altura > mais_Alto.altura){

                    mais_Alto = vet_Atletas[i]; 

                    }

            }

        printf("\nA pessoa mais velha e %s\n", mais_Velho.nome);
        printf("A pessoa mais alto e: %s\n", mais_Alto.nome);
        
return 0;

}