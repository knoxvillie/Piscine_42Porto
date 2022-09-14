#include<stdio.h>

int ft_recursive_factorial(int nb);

int main(void){
    int numero = 12;

    printf("%d ", ft_recursive_factorial(numero));
    return 0;
}

int ft_recursive_factorial(int nb){
    if(nb < 0 && nb > 12){
        return 0;
    }
    if(nb > 0){
        return (nb * ft_recursive_factorial(nb-1));
    }
    return 1;
}