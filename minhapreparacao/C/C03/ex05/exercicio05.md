# C 03 Exercício 05

---

- Reproduzir de forma idêntica o funcionamento da função `strlcat` (man strlcat).

- Ela deverá ser prototipada da seguinte maneira:
```
unsigned int ft_strcat(char *dest, char *src, unsigned size);
```

---
---

#### Declarando a função:
    unsigned int ft_strlcat(char *dest, char* src, unsigned int size){
        unsigned int i, j;

        for(i=0; i<size-1 && dest[i]; i++){}

        for(j=0; i<(size-1) && src[j]; j++){
            dest[i] = src[j];
            i++;
        }
        dest[i] = '\0';
        printf("%s", dest);
        return i;
    }

Entenda o código:
> - `i<size-1` garante que `i` seja sempre menor que o comprimento da string, além de não comparar o byte nulo.

A função `printf` não faz parte da solução da questão.

#### Código completo:
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

---
---
## Documentação:

> https://c-for-dummies.com/blog/?p=3896