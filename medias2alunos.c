#include <stdio.h>

int main(){
    float nota1;
    float nota2;
    printf("Digite as notas do aluno: \n");
    scanf("%f %f", &nota1, &nota2);
    
    float media = (nota1 + nota2)/2;

    if (media >= 5){
        printf("A média foi ""%.2f" " e o aluno foi APROVADO!\n", media);
    }
    else {
        printf("A média foi " "%.2f" " e o aluno foi REPROVADO!\n", media);

    }
    return 0;

}
