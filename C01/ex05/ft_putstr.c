#include <unistd.h>

void ft_putstr(char *str);

void ft_putstr(char *str){
    while (*str != '\0'){
        write(1, str, 1);
        str++;
    }
}
int main(void){
    char texto[] = "Gustav Mahler 162";

    ft_putstr(texto);
    return 0;
}