#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    
    char nome[50];
    int dia;
    int mes;
    int ano;

} pessoa;

int main(){


    
    pessoa vet_Pessoas[5], mais_Velho, mais_Novo;;

            for(int i = 0; i < 6; i++){

                printf("\nInsira seu nome: ");
                fgets( vet_Pessoas[i].nome,sizeof(vet_Pessoas[i].nome), stdin);
                printf("\nInsira sua data de nascimento:\n");
                scanf("%d%d%d",& vet_Pessoas[i].dia,& vet_Pessoas[i].mes,& vet_Pessoas[i].ano); getchar();

            }

    mais_Velho = mais_Novo = vet_Pessoas[0];

            for(int i = 0; i < 5; i++){

                    if(vet_Pessoas[i].ano < mais_Velho.ano || (vet_Pessoas[i].ano == mais_Velho.ano && vet_Pessoas[i].mes < mais_Velho.mes) || (vet_Pessoas[i].ano == mais_Velho.ano && vet_Pessoas[i].mes == mais_Velho.mes && vet_Pessoas[i].dia < mais_Velho.dia)){

                    mais_Velho = vet_Pessoas[i];

                    }

                    if (vet_Pessoas[i].ano > mais_Novo.ano || (vet_Pessoas[i].ano == mais_Novo.ano && vet_Pessoas[i].mes > mais_Novo.mes) || (vet_Pessoas[i].ano == mais_Novo.ano && vet_Pessoas[i].mes == mais_Novo.mes && vet_Pessoas[i].dia > mais_Novo.dia)) {
           
                    mais_Novo = vet_Pessoas[i];
            
                    }

            }
            
        printf("\nA pessoa mais velha e %s\n", mais_Velho.nome);
        printf("A pessoa mais nova e: %s\n", mais_Novo.nome);

return 0;

}