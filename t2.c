#include <stdio.h>


//#define numt 5 //declarando constante (algo que não muda)

int main(){

    int numeros = 30;
    int chute;
    //int ganhou = 0;
    int nunt = 1;

    //for (int i = 1; i <= numt ; i++)

    //while(ganhou == 0) {
    while(1){
        printf("Tentativa %d. Qual o seu chute?\n", nunt);
        scanf("%d", &chute);

        if(chute < 0){
            printf("voce nao pode chutar pontos negativos\n");
            continue; // volta par ao inicio do for sem dar continuidade no restante abaixo.
        }

        int acertou = (chute == numeros);
        int maior = chute > numeros;

        if(acertou){
            printf("Parabens!\n");
            //ganhou = 1; // posso usar o break também
            break; // para de executar o programa

        }else if(maior){
                printf("seu chute foi maior que o numero secreto\n\n");
        }else{
            printf("seu chute foi menor que o numero secreto.\n\n");
        }
        nunt++; //= nunt = nunt + 1;
    }
        
    printf("Fim de jogo!\n");
    printf("voce acertou em %d tentativas.\n", nunt);
    
    return 0;
}