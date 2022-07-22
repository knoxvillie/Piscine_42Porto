#include<stdio.h>
#include<unistd.h>
char *ft_strcat(char *dest, char *src);

int main(void){
    char texto[20] = {"hello"};
    char fonte[20] = {" 0world"};
    
    printf("%s", ft_strcat(texto, fonte));

    return 0;
}

/*
char *ft_strcat(char *dest, char *src){
    int contador = 0, comprimento = 0;

    for(comprimento; dest[comprimento]; comprimento++){
    }
    for(contador; src[contador]; contador++){
        dest[comprimento] = src[contador];
        comprimento++;        
    }
    dest[comprimento] = '\0';
    return dest;
}

/*
char *ft_strcat(char *dest, char *src){
    int contador = 0, comprimento = 0;

    while(dest[comprimento]){
        comprimento++;
    }
    while(src[contador]){
        dest[comprimento] = src[contador];
        comprimento++;
        contador++;
    }
    dest[comprimento] = '\0';
    return dest;

}
*/

char *ft_strcat(char *dest, char *src) {
    char *pont;

    pont = dest;

    for(; *dest; dest++){
    }
    for(; *src; ){
        *dest++ = *src++;
    }
    *dest = '\0';
    return pont;
}

/*
char *ft_strcat(char *dest, char *src){
	char	*ptr;

	ptr = dest;

	while (*dest)
		dest++;
	
    while (*src)
		*dest++ = *src++;
	
    *dest = '\0';
	
    return (ptr);
}
*/