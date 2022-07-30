#include <unistd.h>

void ft_is_negative(int n);

void ft_is_negative(int n){
    char resposta;

    if(n >= 0) resposta = 'P';
    else resposta = 'N';
    write(1, &resposta, 1);    
}

int main(void){
    ft_is_negative(-1);
    return 0;
}