#include<unistd.h>

void  ft_putchar(char c);

int main( int argc, char **argv){
    int i;
    
    for(i=0; argv[0][i] && argc; i++){
        ft_putchar(argv[0][i]);
    }
    return 0;
}

void ft_putchar(char c){
    write (1, &c, 1);
}