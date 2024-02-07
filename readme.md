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


































































































































































































































































































