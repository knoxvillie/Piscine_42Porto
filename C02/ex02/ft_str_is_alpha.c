#include<stdio.h>

int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str){
    int i, is_alpha = 1;
    
    for(i=0; str[i]!='\0'; i++){
        printf(" %d", str[i]);
        if( !(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')){
            is_alpha = 0;
            break;
        } 
    }
    return is_alpha; 
}

int main(void){
    char str[20] = "helloworld";

    printf(" %d", ft_str_is_alpha(str));

    return 0;
}