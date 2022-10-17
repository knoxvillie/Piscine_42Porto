#include<stdio.h>

char *ft_strupcase(char *str);

int main(void){
    char str[] = "tudoaquiepqueno";
    char str2[] = "N3m tud0 4aqu1 3 p3qu3n0";

    printf("%s ", ft_strupcase(str));
    printf("%s", ft_strupcase(str2));
    return 0;
}

char *ft_strupcase(char *str){
    int i;
    for(i=0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
        else continue;
    }
    return str;
}

/*
char *ft_strupcase(char *str){
    int i;

    for(i=0; str[i]!='\0'; i++){
        if(!(str[i]>='a' && str[i]<='z') || str[i]>='A' && str[i]<='Z'){
            continue;
        }
        else{
            str[i] = str[i] - 32;
        }
    }
    return str;
}
*/
