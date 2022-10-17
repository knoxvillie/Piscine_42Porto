#include<stdio.h>

int ft_atoi(char *str);

int main(void){
    char str[] = "   ---+--+ab567";

    printf("%s, %d", str, ft_atoi(str));

    return 0;
}

int ft_atoi(char *str){
    int sinal = 1, numero = 0;
    
    for(; *str == 32 || *str >= 9 && *str <= 13; str++){} /* Espaços vazios */
    for(; *str == 43 || *str == 45; *str++){ /* Sinais */
        if(*str == 45){
            sinal *= -1;
        }
    }
    for(; *str >= 48 && *str <= 57; str++){ 
        numero = (numero * 10) + *str - 48;
    }

    for(; *str; str++){} /* Overflow */
    *str = '\0';

    return (numero*sinal);
}