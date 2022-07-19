#include<stdio.h>

int ft_str_is_printable(char *str);

int main(void){
    char str[] = "=)(/&$ #\0#$89iksainre";

    printf("%d", ft_str_is_printable(str));
    printf("%s", str);
    return 0;
}

int ft_str_is_printable(char *str) {
    int i, is_printable = 1;

    for(i=0; str[i] != '\0'; i++){
        if(!(str[i]>= ' ' && str[i]<= '~')){
            is_printable = 0;
            break;
        }
    }
    return is_printable;
}
