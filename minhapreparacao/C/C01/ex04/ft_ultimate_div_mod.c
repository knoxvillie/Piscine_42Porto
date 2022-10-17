#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int *b){
    int temp;

    temp = *a;
    *a = *a / *b;
    *b = temp % *b;
}

int main(void){
    int valor_a, valor_b;
    valor_a = 10;
    valor_b = 3;

    ft_ultimate_div_mod(&valor_a, &valor_b);
    printf("Valor a: %d\nValor b: %d", valor_a, valor_b);
}