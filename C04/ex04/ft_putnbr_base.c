#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c);
void ft_putnbr_base(int nbr, char *base);
void base10tobasen(int numero, int i);
int checarbase(char *base);

int main(void){
    int numero_base10 = 876;
    char *base;
    
    base = "0123456789abcdef";
    ft_putnbr_base(numero_base10, base);
    base = "01";
    ft_putnbr_base(numero_base10, base);
    base = "0123456789";
    ft_putnbr_base(numero_base10, base);


    return 0;
}

void ft_putchar(char c){
    write(1, &c, 1);
}

void base10tobasen(int numero, int i){

    if(numero<0){
        numero*=-1;
        ft_putchar('-');
    }
    else if(numero<i){
        if(numero<10){
            ft_putchar(numero + '0');
        }
        else{
            ft_putchar(numero - 10 + 'A');
        }
    }
    else{
        base10tobasen(numero/i, i);
        base10tobasen(numero%i, i);
    }
}

void ft_putnbr_base(int nbr, char *base){
    unsigned int i;

    if(i = checarbase(base)){

        ft_putchar('0');

        if(i==2){
            ft_putchar('b');
            base10tobasen(nbr, i);
        }
        else if(i==8){

        }
        else if(i==10){
            ft_putchar('d');
            base10tobasen(nbr, i);
        }
        else{
            ft_putchar('x');
            base10tobasen(nbr, i);
        }
        ft_putchar('\n');
    }
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
