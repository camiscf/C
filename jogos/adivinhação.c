#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n"); 
    printf("******************************************\n");

    srand(time(NULL));
    int numerogrande = rand();
    /*int numerogrande = rand();
    int segundos = time(0);
    srand(segundos);*/

    int numerosecreto = numerogrande % 100; //vai de 0 a 99
    int chute=0;
    int tentativas = 1;
    int acertou;
    int nivel;
    double pontos = 1000;

    printf("Qual o nível de dificuldade?\n");
    printf("[1] Fácil\n"
           "[2] Médio\n"
           "[3] Díficil\n\n");
    scanf("%d", &nivel);

    int numerodetentativas;
    switch(nivel){
        case 1:
        numerodetentativas = 20;
        break;
        
        case 2:
        numerodetentativas = 15;
        break;
        
        case 3:
        numerodetentativas = 6;
        break;
        
        default:
        printf("número inválido");
        return main();         
    }

    for (int i = 1; i <= numerodetentativas; i++){
        printf("Tentativa %d \n", tentativas);
        printf("Qual o seu chute? Lembrando que é para ser um número de 1 a 100");
        scanf("%d", &chute);

        printf("Seu chute foi %d\n", chute);

        if (chute < 0){
            printf("Você não pode chutar números negativos\n\n");
            continue;
        }
        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou){
            break;
            }
        else if(maior){
            printf("Seu chute é maior que o número secreto, chute mais baixo\n\n");
                }
        else{
            printf("Seu chute é menor que o número secreto, chute mais alto\n\n");
                } 
            
            tentativas++;
            
            double pontosperdidos = abs((chute - numerosecreto))/2.0;
            /*if (pontosperdidos < 0){
                pontosperdidos*=-1;
            }
            isso é substituido pela função abs, sendo que ela só existe da stdlib.h*/
            pontos -= pontosperdidos;
    }
    printf("FIM DE JOGO!\n");    
    if (acertou){
        printf("Você acertou!");
        printf("Você usou %d tentativas\n", tentativas);
        printf("Total de pontos: %.2f\n", pontos);        
    }
    else{
        printf("Você perdeu! Tente de novo\n");
        return main();
    }

/**/


return 0;
}
