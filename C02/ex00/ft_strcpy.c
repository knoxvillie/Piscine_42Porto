#include <stdio.h>

char *ft_strcpy(char *des, char *src);

int main(void){

    char fonte[] = "Hello, world!";
    char copia[20];

    ft_strcpy(copia, fonte);

    return 0;
}

char *ft_strcpy(char *des, char *src){
    int i;

    for(i = 0 ; src[i]; i++){
        des[i] = src[i];
        printf("%c ", des[i]);
    }
    des[i] = '\0';
    printf("%c", des[i]);
    return des; 
}
