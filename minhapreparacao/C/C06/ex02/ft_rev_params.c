#include<unistd.h>

void ft_putchar(char c);

int main(int argc, char *argv[]){
    for(int i = argc-1; i > 0; i--){
        for(int j = 0; argv[i][j]; j++){
            ft_putchar(argv[i][j]);
        }
        ft_putchar('\n');
    }
    return 0;
}

void ft_putchar(char c){
    write(1, &c, 1);
}