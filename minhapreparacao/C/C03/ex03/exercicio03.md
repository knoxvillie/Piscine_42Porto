# C 03 Exercício 03
---

- Reproduzir de forma idêntica o funcionamento da função `strncat` (man strncat).

- Ela deverá ser prototipada da seguinte maneira:
```
char *ft_strncat(char *dest, char *src, unsigned int nb);
```

---
---

#### Declarando a função:
    char *ft_strncat(char *dest, char *src, unsigned int nb){
        unsigned int i;
        char *pont;

        pont = dest;

        for(;*dest; dest++){}
        for(i=0; i<nb && *src; i++){
            *dest++ = *src++;
        }
        *dest = '\0';
        return pont;
    }

Entenda o código:
A resolução é muito parecida com a resolução de [Exercicio 02].
> - O primeiro ciclo `for` incrementa dest até seu elemento nulo.
> - O segundo ciclo `for` atribui e incrementa `src` a `dest` enquanto o ponteiro `src` não apontar para um byte nulo e enquanto `i<nb`, uma vez que `nb` começa a partir de 1.

A função `printf` não faz parte da solução da questão.

#### Código completo:
    #include<stdio.h>

    char *ft_strncat(char *dest, char *src, unsigned int nb);

    int main(void){
        char str[] = "hello", fonte[] = " world";

        printf("%s", ft_strncat(str, fonte, 3));
        return 0;
    }

    char *ft_strncat(char *dest, char *src, unsigned int nb){
        unsigned int i;
        char *pont;

        pont = dest;

        for(;*dest; dest++){}
        for(i=0; i<nb && *src; i++){
            *dest++ = *src++;
        }
        *dest = '\0';
        return pont;
    }

---
---

## Documentação:

> man `strncat`