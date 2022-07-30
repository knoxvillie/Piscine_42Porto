#include<stdio.h>

int ft_str_is_uppercase(char *str);

int main(void){
    char text[] = {"TUDOGRANDE SEPARADO"};

    printf("%d", ft_str_is_uppercase(text));
    return 0;
}

int ft_str_is_uppercase(char *str){
    int i, is_uppercase = 1;

    for(i=0; str[i] != '\0'; i++){
        if(!(str[i]>='A' && str[i]<='Z')){
            is_uppercase = 0;
            break;
        }
    }
    return is_uppercase;
}