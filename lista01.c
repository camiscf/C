/* Programa: lista01
   Autor: Camila Caleones de Figueiredo
   Data: 20/07
   Descrição: Esse programa irá receber duas notas, calcular a média entre elas e dizer se o aluno foi aprovado ou não
*/


#include <stdio.h>

int main(){
    float nota1; //Declarei a variável para receber a primeira nota
    float nota2; //Declarei outra variável para a segunda nota 
    printf("Digite as notas do aluno: \n"); //Mostra para o usuário digitar as notas
    scanf("%f %f", &nota1, &nota2); // O programa vai receber as notas
    
    float media = (nota1 + nota2)/2; // Calculou a média

    if (media >= 5){ //Se média maior que 5, o aluno foi aprovado, caso contrário, ele foi reprovado
        printf("A média foi %.2f e o aluno foi APROVADO!\n", media);
    }
    else {
        printf("A média foi %.2f  e o aluno foi REPROVADO!\n", media);

    }
    return 0;

}