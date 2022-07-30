#include<stdio.h>

int ft_atoi_base(char *str, char *base);
int checarbase(char *base);
int basentobase10(int numero, int tamanhobase);
int putnbr(int numero, int tamanhobase);


int main(void){
    char str[] = "   ---+--+03110211ab567";
    char base[] = "0123";

    printf("%d ", ft_atoi_base(str, base));

    return 0;
}

int ft_atoi_base(char *str, char *base){
    int sinal = 1, numero = 0;
    unsigned int tamanhobase;

    if(tamanhobase = checarbase(base)){

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

        return (putnbr(numero, tamanhobase) * sinal);
    }
    return 0;
}

int checarbase(char *base){
    int tamanhobase, e = 0, f;

    for(tamanhobase=0; base[tamanhobase]; tamanhobase++){}
    if(tamanhobase<2){
        return 0;
    }
    while(base[e]){
        if(base[e]=='+' || base[e]=='-'){
            return 0;
        }
        f = e + 1;
        while(base[f]){
            if(base[e] == base[f]){
                return 0;
            }
            f++;
        }
        e++;
    }
    return tamanhobase;
}

int basentobase10(int numero, int tamanhobase){

}

int putnbr(int numero, int tamanhobase){
    int e, valor_exp;
    static int somatorio = 0;
    static int contador = -1;


    if(numero > tamanhobase){
        putnbr(numero%10, tamanhobase);
        putnbr(numero/10, tamanhobase);
    }
    else{
        contador++;

        if(contador == 0){
            somatorio = numero;
        }
        else if(contador == 1){
            somatorio += numero*tamanhobase;
        }
        else{
            valor_exp = tamanhobase;
            for(e=0; e < contador-1; e++){
                valor_exp *= tamanhobase;
            }
            somatorio += numero*valor_exp;
        }
    }
    return somatorio;
}