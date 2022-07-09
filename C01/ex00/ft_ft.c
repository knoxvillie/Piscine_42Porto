#include <stdio.h>

void ft_ft(int *nbr);

void ft_ft(int *nbr){
    *nbr = 42;
}

int main(void){
    int *nbr, numero;

    nbr = &numero;
    ft_ft(nbr);
    printf("%d", *nbr);
    printf("%d", numero);
}
