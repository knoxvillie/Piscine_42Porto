#include<stdio.h>

unsigned int ft_strlcpy(char *dest, char* src, unsigned int size);

int main(void){
    char dest[20], src[20] = "Helloworld";
    unsigned int i = 11;

    printf("%d", ft_strlcpy(dest, src,i));
    return 0;
}

unsigned int ft_strlcpy(char *dest, char* src, unsigned int size){
    unsigned i;

    for(i=0; i<size-1; i++){

        dest[i] = src[i];
    }
    
    dest[i] = '\0';
    
    return i;
}