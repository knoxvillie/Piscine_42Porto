# C 02 Exercício 10
---

- Reproduzir de forma idêntica o funcionamento da função `strlcpy` (man strlcpy).

- Ela deverá ser prototipada da seguinte maneira:
```
unsigned int ft_strlcpy(char *dest, char *src, int size);
``` 

---
---

#### Declarando a função:
    unsigned int ft_strlcpy(char *dest, char* src, unsigned int size){
        unsigned i;

        for(i=0; i<size-1; i++){

            dest[i] = src[i];
        }
        
        dest[i] = '\0';
        
        return i;
    }

> - Repare que o a função retorna o comprimento da string `dest`, lembre-se que comprimento = tamanho -1, pois começamos a contar o comprimento a partir de 0. 
> Para garantir que o último elemento da string seja o byte nulo, então devemos lembrar guardar o seu espaço. `i < size-1` a mesma coisa de `i <= size-2` ou `i < comprimento` ou `i <= comprimento - 1`.

#### Código completo:
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

---
---

## Documentação:

> C Completo Total

> https://www.programiz.com/c-programming/library-function/string.h/strlen

> https://linux.die.net/man/3/strlcpy