#include<stdio.h>

int ft_find_next_prime(int nb);
int ft_is_prime(int nb);

int main(void){
    
    printf("%d ", ft_find_next_prime(14));
    return 0;
}

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

int ft_find_next_prime(int nb){

    if (ft_is_prime(nb)){
        return nb;
    }
    
    else{
        while(!(ft_is_prime(++nb))){}
        return nb;
    }
}