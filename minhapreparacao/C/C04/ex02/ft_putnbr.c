#include<unistd.h>

void ft_putnbr(int nb);
void ft_putchar(char c);

int main(void){
    int i = 52342;
    ft_putnbr(i);

    return 0;
}

void ft_putchar(char c){
    write(1, &c, 1);
}
void ft_putnbr(int nb){

    if(nb<0){
        ft_putchar('-');
        nb = -nb;
    }
    else if(nb<10){
        ft_putchar(nb + '0');
    }
    else{
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
}