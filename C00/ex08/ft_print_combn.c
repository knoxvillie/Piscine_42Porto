#include <unistd.h>

void ft_putchar(char c);
void ft_print_combn(int n);

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_combn(int n){
  
}

int main(void){
    ft_print_combn(3);
    return 0;
}