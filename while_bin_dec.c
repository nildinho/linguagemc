#include <stdio.h>

int binarioParaDecimal(int numeroBinario) {
    int decimal = 0, expoente = 0, digito;

    while (numeroBinario != 0) {
      
        digito = numeroBinario % 10;
        

        decimal += digito * (1 << expoente);
    
        numeroBinario /= 10;
        expoente++;
    }

    return decimal;
}

int main() {
    int numeroBinario = 101110;

    printf("O numero binario %d em decimal é: %d\n", numeroBinario, binarioParaDecimal(numeroBinario));

    return 0;
}
