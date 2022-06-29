#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet(void);

void ft_print_alphabet(void){
    char letra = 'a';

    while(letra <= 'z'){
        write(1, &letra, 1);
        letra++;
    }
}

int main(void){
    ft_print_alphabet();
    return 0;
}