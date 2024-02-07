# Estudo da Linguagem C
## Neste repositório será e publicado arquivos escritos em C

<img src="https://codigo35.com/wp-content/uploads/2023/09/695px-C_Programming_Language.svg_.png" height="150" width="200">

### Abaixo é apresentado os arquivos deste repositório

#### hello.c

```c
#include <stdio.h>

int main(){
    printf("hello,world\n");
    return 0;
}
```
#### primeiro.c

```c
/*
Este programa pede ao usuário um número qualquer e depois exibe o número na tela
*/
#include <stdio.h> // estamos importanto uma biblioteca para trabalhar com entrada e saida de dados


int main(){
    int idade; //declaração de uma variável idade do tipo inteiro
    printf("digite a sua idade e tecle enter\n");
    scanf("%d",&idade); //para pegar o número digitado pelo usuário
                        //estamos usando o comando scanf e adicionando
                        //o valor digitado ao endereço de memória 
                        //da variável idade. Usamos o e-comercial para 
                        //referenciar o endereço de memória da variável
                        //idade
    printf("A idade digitada é %d\nendereço da variável idade %x \n ",idade, &idade);
    return 0;                    
}
```
#### operacoes.c

```c
#include<stdio.h>

int main(){
    int n1;
    int n2;
    int soma;
    int subtrair;
    int multiplicar;
    int dividir;

    printf("digite um número e tecle enter: \n");
    scanf("%d",&n1);

    printf("Digite outro número e tecle enter: \n");
    scanf("%d",&n2);

    soma = n1 + n2;
    subtrair = n1 - n2;
    multiplicar = n1 * n2;
    dividir = n1 / n2;

    printf("O resultado da soma é %d\n",soma);
    printf("O resultado da subtração é %d\n", subtrair);
    printf("o resultado da multiplicação é %d\n", multiplicar);
    printf("O resultado da divisão é %d\n", dividir);

    return 0;
}
```
#### Descontos.c

```c
#include <stdio.h>

int main(){
    float preco;
    float percentual;
    float resultado;
    float vdesc;

    printf("Digite o preço do produto: \n");
    scanf("%f",&preco);

    printf("Digite o desconto do produto: \n");
    scanf("%f",&percentual);

    resultado = preco - (preco * ( percentual / 100));

    vdesc = preco - resultado;

    printf("O preço final do produto com desconto de %2.2f é %2.2f\n",vdesc,resultado);

    return 0;
}
```

#### calculo_media

```c
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
```
#### Parimpar

```c
#include <stdio.h>

int main(){
    int num;
    printf("Digite um número: \n");
    scanf("%d",&num);

    if(num % 2 == 0){
       printf("Este número é par \n");    
    }
    else{
        printf("Este número é impar \n");
    }
    return 0;
}    

```
#### media_aluno.c
```c
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
```
#### bissexto.c
```c
#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: \n");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
    }

    return 0;
}

```
#### while1.c

```c
#include <stdio.h>

int main(){

  int i = 0;
  while(i <= 10){
      printf("%d\n",i);
      i++;
  }
  return 0
}
```
#### while_dec_bin.c

```c
#include <stdio.h>

int main(){

    int dec = 24;
    int resto = 0;
    int pos = 1;
    int rs = 0;
    while( dec > 0 ){
        resto = dec % 2;
        dec = dec / 2;
        rs = rs + pos * resto;
        pos = pos * 10;
    }
    printf("%d\n",rs);
    return 0;
}
```
#### while_bissexto.c

```c
#include <stdio.h>

int main(){
    int ano = 1950;
    int qtd = 0;

    while( ano <= 2024 ){
        if( ano % 4 == 0 ){
            printf("O ano %d é bissexto\n",ano);
            qtd++;
        }
        ano++;
    }
    printf("Temos %d anos bissextos\n",qtd);
    return 0;
}
```

#### while_bin_dec.c

```c
#include <stdio.h>

#include <math.h>



int main(){



    int binario[6]={1,0,1,1,1,0};

    int rs = 0;

    int pos=0;

    int exp = 5;

    while ( pos <= 5){

        rs += binario[pos] * ( pow( 2 , exp));

        pos++;

        exp--;

    }

    printf("%d\n",rs);

    return 0;



}

```
#### for1.c
```c
#include<stdio.h>

int main(){
    int x;
    for(x = 1; x <= 10 ; x++){
        printf("%d\n",x);
    }
    return 0;
}
```
#### colecoes_iguais.c
```c
#include <stdio.h>

int main() {
    int c1[10] = {10, 5, 68, 8, 47, 12, 54, 13, 62, 11};
    int c2[15] = {11, 5, 62, 112, 84, 76, 12, 55, 59, 85, 13, 0, 14, 19, 18};

    printf("Números iguais nos dois arrays:\n");

    int a, b;

    for (a = 0; a < 10; a++) {
        for (b = 0; b < 15; b++) {
            if (c1[a] == c2[b]) {
                printf("%d\n", c1[a]);
            }
        }
    }


    return 0;
}

```
#### colecao2.c
```c
#include<stdio.h>
int main(){

    int loud[10] = {1,21,11,8,19,45,7,24,26,18};
    int soma=0, media=0, i;
    for( i=0 ; i <= 9 ; i++ ){
        soma += loud[i];
    }
    printf("O resultado da soma é %d\n",soma);

    for(i = 0 ; i < 10 ; i++){
        media += loud[i];
    }
    printf("O resultado da média é %d\n",(media/10));
    for(i = 0 ; i< 10 ; i++){
        if( loud[i] % 2 == 0){
            printf("%d\n",loud[i]);
        }
    }

return 0;

}
```
#### colecao1.c
```c
// Array é um conjunto de dados sobre um determinado
// assunto. Podemos falar de valores númericos, textos,
// datas, ou objetos
#include<stdio.h>

int main(){
    int valores[5] = {10,5,8,12,7};
    printf("%d\n",valores[3]);

    return 0;
}
```






























































































































































































































































































