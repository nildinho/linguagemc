/*
Neste Programa iremos calcular a nota média do aluno. Teremos a entrada de 4 notas, depois será feito o cálculo de média, onde iremos somar as nitas e depois dividir por 4. Se o aluno tiver uma média acima ou igual a 7, então estará aprovado; caso o aluno de tenha uma menor ou igual a 4, então o aluno estará aprovado; caso contrário, estará em recuperação
*/

#include <stdio.h>

int main(){
    float n1,n2,n3,n4,md;

    printf("Digite a primeira nota: \n");
    scanf("%f",&n1);

    printf("Digite a segunda nota: \n");
    scanf("%f",&n2);

    printf("Digite a terceira nota: \n");
    scanf("%f",&n3);

    printf("Digite a quarta nota: \n");
    scanf("%f",&n4);

    md = (n1+n2+n3+n4) / 4;

    printf("A nota média do aluno é %2.2f\n",md);

    if(md >= 7){
        printf("Aprovado\n");
    }
    else if( md <= 4){
        printf("Reprovado\n");
    }
    else{
        printf("Recuperação\n");
    }
}