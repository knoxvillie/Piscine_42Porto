#include<stdio.h>

char *ft_strlowcase(char *str);

int main(void){
    char str[] = "minusculo MINUSCULO M1N2SC2L0";

    printf("%s", ft_strlowcase(str));
    return 0;
}

char *ft_strlowcase(char *str){
    int i;

    for(i=0; str[i]!='\0'; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    else continue;
    }
    return str;
}