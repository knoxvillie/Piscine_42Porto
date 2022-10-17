# C 03 Exercício 00

---

- Reproduzir de fomra idêntica o funcionamentoo da função `strcmp` (man strcmp).

- Ela deverá ser prototipada da seguinte maneira:
```
int ft_strcmp(char *s1, char *s2);
```

---
---

A função `printf` não faz parte da solução da questão.

#### Declarando a função:
    int ft_strcmp(char *s1, char *s2){
        unsigned int i;

        for(i=0; s1[i] && s2[i]; i++){
        if(s1[i]>s2[i]){
            return 1;
        } 
        else if(s1[i]<s2[i]){
            return -1;
        }
        }
        return 0;
    }

Entada o código:
> - O ciclo `for` percorre até o final de uma das strings ou das se forem do mesmo tamanho. Retorna `1` ou `-1` se alguma diferença for encontada, e `0` se forem iguais. 
> - Repare que o que estamos comparando entre os valores dos índices das string são os valores ASCII.

#### Código completo:	
    #include<stdio.h>

    int ft_strcmp(char *s1, char *s2);

    int main(void){
        char s1[100] = {"abcd123"}, s2[100] = {"abCd123"}, s3[100] = {"abcd123"};
        
        printf("%d\n", ft_strcmp(s1, s2));
        printf("%d", ft_strcmp(s1, s3));
        return 0;
    }

    int ft_strcmp(char *s1, char *s2){
        unsigned int i;

        for(i=0; s1[i] && s2[i]; i++){
        if(s1[i]>s2[i]){
            return 1;
        } 
        else if(s1[i]<s2[i]){
            return -1;
        }
        }
        return 0;
    }

> Reflita no que acontece caso dentro de `main` a declaração das strings sejam: `char s1[100] = {"abcd123"}, s2[100] = {"abCd123"}, s3[100] = {"abcd123"};`.

---
---

## Documentação:

> https://www.programiz.com/c-programming/library-function/string.h/strcmp