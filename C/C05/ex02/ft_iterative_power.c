#include<stdio.h>

int ft_iterative_power(int nb, int power);

int main(void){
    int base, potencia;
    base = -2;
    potencia = 4;

    printf("Resultado: %d ", ft_iterative_power(base, potencia));
    return 0;
}

int ft_iterative_power(int nb, int power){
    int resultado = 1;
    double p = 1;

    if(power < 0){
        return 0;
    }
    else if(power == 0){
        return 1;
    }
    while(power--){
        p*=nb; 
    }

    if(p < -2147483648 || p > 2147483647){
        return 0;
    }
    else{
        resultado = p;
        return resultado;
    }
}