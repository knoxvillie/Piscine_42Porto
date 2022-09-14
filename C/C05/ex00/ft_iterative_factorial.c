#include<stdio.h>

int ft_iterative_factorial(int nb);

int main(void){
    int numero = 12;

    printf("%d ", ft_iterative_factorial(numero));

    return 0;
}

int ft_iterative_factorial(int nb){
    int fatorial = 1, i = 1;

    if(nb < 0 && nb > 12){
        return 0;
    }

    while(i <= nb){
        fatorial*=i;
        i++;
    }
    return fatorial;
}


