#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strncpy(char *dest, char *src, unsigned int n){
    int i;

    for(i = 0; i < n && src[i] != '\0' ; i++){
        dest[i] = src[i];
        printf("%c", dest[i]);
    }
    for( ; i < n; i++){
        dest[i] = '\0';
        printf("%c", dest[i]);
    }

}

int main(void){
    char src[] = "hello world";
    char dest[20];

    ft_strncpy(dest, src, 12);
    ft_strncpy(dest, src, 4);
    ft_strncpy(dest, src, 20);

    return 0;
}

