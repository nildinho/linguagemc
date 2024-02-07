
#include <stdio.h>
 
int main() {
    int base, expoente, i, b;
 
    printf("Digite um número para a base: \n");
    scanf("%d", &base);
 
    printf("Digite um para o expoente: \n");
    scanf("%d", &expoente);

    b=base;
    for( i = 1 ; i < expoente ; i++){
        // base *= b;
        base = base * b;
    }

    printf("%d\n",base);
 
    return 0;
}