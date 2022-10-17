#include<stdio.h>

int ft_sqrt(int nb);

int main(void){
    int numero = 999;
    
    printf("%d ", ft_sqrt(numero));
    return 0;
}

int ft_sqrt(int nb){
    int num = 0;

    while (num*num < nb){
        num++;
    }
    if (num*num == nb){
        return num;
    }
    else{
        return 0;
    }
}