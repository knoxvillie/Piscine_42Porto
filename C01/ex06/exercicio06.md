# C 01 Exercício 06
---

- Escreva uma função que contenha o número de caracteres em uma string de caracteres que retorne ao número encontrado.

- Ela deverá ser prototipada da seguinte maneira:
```
int ft_strlen(char *str);
```
---
---

#### Declaração da função:
    void ft_strlen(char *str){
        int i = 0;

        while (str[i] != '\0'){
            i++;
        }

        return i;
    }
> Repare que o valor de `i` representa o tamanho da string, uma vez que seu valor não é incrementado quando o elemento nulo `'\0'` é encontrado.

#### Código completo:
> A função `printf` não é aceita na solução original do problema. 

    #include <stdio.h>

    int ft_strlen(char *str);

    void ft_strlen(char *str){
        int i = 0;

        while (str[i] != '\0'){
            i++;
        }

        return i;
    }

    int main(void){
        char texto[] = "Hello World";

        printf("%d", ft_strlen(texto));
        return 0;
    }

> Repare que usamos `' '` aspas simples para caracteres e `" "` aspas duplas para string, sequência de caracteres.
Podemos também declarar a string `char texto[] = {"Hello World"};`. 
---
---

## Documentação:
> C Completo Total

> https://stackoverflow.com/questions/25384517/whats-the-difference-between-and-in-c-programming

> https://www.programiz.com/c-programming/c-strings
