#include<stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void){
    char str[] = "hello", fonte[] = " world";

    printf("%s", ft_strncat(str, fonte, 3));
    return 0;
}

char *ft_strncat(char *dest, char *src, unsigned int nb){
    unsigned int i;
    char *pont;

    pont = dest;

    for(;*dest; dest++){}
    for(i=0; i<nb && *src; i++){
        *dest++ = *src++;
    }
    *dest = '\0';
    return pont;
}