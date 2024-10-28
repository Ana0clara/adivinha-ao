#include <stdio.h>

int main() {
    int numerosecreto = 42;
    int chute;
    int ganhou;
    int tentativas = 0;
    
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    while(1){
       
        printf("Tentativa %d\n", tentativas + 1 );
        printf("Qual é o seu chute?\n");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
    if(chute < 0) {
                 printf("Você não pode chutar números negativos!\n");
        continue;
        }
    if(chute == numerosecreto) {
             printf("Parabéns! Você acertou!\n");
             printf("Jogue de novo, você é um bom jogador!\n");
              break;
    }
    else {
        
        printf("Você errou!\n");
        if(chute > numerosecreto) {
                printf("Seu chute foi maior que o número secreto\n");
           
                }
                

        if(chute < numerosecreto) {
                printf("Seu chute foi menor que o número secreto\n");
            }
                printf("Mas não desanime, tente de novo!\n");
                 tentativas = tentativas + 1;
    } 
        
    }
    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
    //printf("%d é o número secreto. Não conta para ninguém!\n", numerosecreto);

}