#include <stdio.h>

void ft_swap(int *a, int *b);

void ft_swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}

int main(void){
    int valor_a, valor_b;

    valor_a = 20;
    valor_b = 30;

    ft_swap( &valor_a, &valor_b);
    printf("Valor de a: %d\n", valor_a);
    printf("Valor de b: %d\n", valor_b);
    return 0;
}