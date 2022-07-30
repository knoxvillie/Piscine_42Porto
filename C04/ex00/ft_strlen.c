#include<stdio.h>

int ft_strlen(char *str);

int main(void){
    char str[] = "Hello, world!";

    printf("%d", ft_strlen(str));
    return 0;
}

int ft_strlen(char *str){
    unsigned int i;

    for(i=0; str[i]; i++){}

    return i;
}