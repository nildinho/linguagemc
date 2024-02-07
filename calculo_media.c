#include<stdio.h>
 
int main(){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;
 
    printf("Digite a nota1: \n");
    scanf("%f",&nota1);
 
    printf("Digite a nota2: \n");
    scanf("%f",&nota2);
 
    printf("Digite a nota3: \n");
    scanf("%f",&nota3);
 
    printf("Digite a nota4: \n");
    scanf("%f",&nota4);
 
    media = (nota1 +  nota2 + nota3 + nota4) /4.0;
 
    printf("A média do aluno é:%.2f\n",media);
 
    return 0;
}