#include<stdio.h>

int ft_str_is_lowercase(char *str);

int main(void){
    char texto[] = "tudopequenoejunto";
    char texto1[] = "tudopequenoe separado";
    char texto2[] = "\0";

    printf("%d", ft_str_is_lowercase(texto));
    printf("%d", ft_str_is_lowercase(texto1));
    printf("%d", ft_str_is_lowercase(texto2));

    return 0;
}

int ft_str_is_lowercase(char *str){
    int i, is_lower = 1;

    for(i = 0; str[i] != '\0'; i++){
        if(!(str[i] >= 'a' && str[i] <= 'z')){
            is_lower = 0;
            break;
        }
    }
    return is_lower;
}