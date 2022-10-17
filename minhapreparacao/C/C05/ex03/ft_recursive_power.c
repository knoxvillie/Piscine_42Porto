#include<stdio.h>

int ft_recursive_power(int nb, int power);

int main(void){
    int base, potencia;

    base = 2;
    potencia = 3;

    printf("%d ", ft_recursive_power(base, potencia));
    return 0;
}

/*
int ft_recursive_power(int nb, int power){
    if (power == 0){
        return 1;
    }
    else{
        return (nb * ft_recursive_power(nb, power-1));
    }
}
*/

int ft_recursive_power(int nb, int power){
    int resultado;
    double p = 1;

    if(power == 0){
        return 1;
    }
    else if(power > 0){
        p = (nb * ft_recursive_power(nb, power-1));

        if(p <= -2147483648 || p >= 2147483647){
            return 0;
        }
        else{
            resultado = p;
            return resultado;
        } 
    } 
    return 0;
}
