#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void){
    char texto[20] = "12345";
    printf("%d", ft_str_is_numeric(texto));

    return 0;

}

int ft_str_is_numeric(char *str){
    int i, is_numeric = 1;

    for(i=0; str[i] != '\0'; i++){
        if(!(str[i] >= '0' && str[i] <= '9')){
            is_numeric = 0;
            break;
        }
    }
    return is_numeric;
}