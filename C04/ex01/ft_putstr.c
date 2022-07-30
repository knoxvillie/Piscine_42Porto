#include<unistd.h>

void ft_putstr(char *str);

int main(void){
    char str[100] = "hello world";

    ft_putstr(str);
    return 0;
}

void ft_putstr(char *str){
    
    for(;*str; str++){
        write(1, str, 1);
    }
}