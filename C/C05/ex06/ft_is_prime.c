#include<stdio.h>

int ft_is_prime(int nb);

int main(void){
    int numero = 591;

    printf("%d ", ft_is_prime(numero));
    return 0;
}

/*
int ft_is_prime(int nb){
    int num = 2;

    if (nb == 0 || nb == 1){
        return 0;
    }
    while (num < nb){
        if (nb%num == 0){
            return 0;
        }
        else num++;
    }
    return 1;
}
*/

int ft_is_prime(int nb){
    int num = 2;

    if (nb < 2){
        return 0;
    }

    while (num <= nb/2){
        if (nb % num == 0){
            return 0;
        }
        else num++;
    }

    return 1;
}