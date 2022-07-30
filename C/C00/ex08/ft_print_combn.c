#include <unistd.h>

void ft_putchar(char c);
void ft_print_combn(int n);

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_combn(int n){
    int i, j, e;
    int digito = 1;

    for (e=0; e<n; e++){
        digito = digito * 10;
    }
    for (i=0; i<digito; i++){
        for (j=i+1; j<10; j++){
            ft_putchar(i + '0');
            ft_putchar(j + '0');
            ft_putchar(',');
            ft_putchar(' ');

        }

    }
  
}

int main(){
    ft_print_combn(1);
    return 0;
}