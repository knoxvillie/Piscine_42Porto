#include<stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void){
    char texto[30] = "I can print hello", fonte[10] = " world" ;
    unsigned int tamanho = 23;
    
    printf("%d", ft_strlcat(texto, fonte, tamanho));
    return 0;
}

unsigned int ft_strlcat(char *dest, char* src, unsigned int size){
    unsigned int i, j;

    for(i=0; i<size-1 && dest[i]; i++){}

    for(j=0; i < (size-1) && src[j]; j++){
        dest[i] = src[j];
        i++;
    }
    dest[i] = '\0';
    printf("%s", dest);
    return i;
}



