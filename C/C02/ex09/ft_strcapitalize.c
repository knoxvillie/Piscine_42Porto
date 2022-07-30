#include<stdio.h>

char *ft_strcapitalize(char *str);

int main(void){
    char texto[] = "oi, tudo bem? 42PAlavraS quarenta-e-duas; cinquenta+e+um";
    
    printf("%s", ft_strcapitalize(texto));
    return 0;
}

char *ft_strcapitalize(char *str){
    int i, iniciopalavra = 1;

    for(i=0; str[i]!='\0'; i++){

        if(iniciopalavra && (str[i]>='a' && str[i]<='z')){
            str[i] -= 32;
            iniciopalavra = 0;
        }

        else if(!(str[i]>='a' && str[i]<='z') && !(str[i]>='A' && str[i]<='Z') && !(str[i]>='0' && str[i]<='9')){
            iniciopalavra = 1;
        }

        else if(!iniciopalavra && (str[i]>='A' && str[i]<='Z')){
            str[i] += 32;
        }
        
        else {
            iniciopalavra = 0;
        }        
    }

    return str;
}
