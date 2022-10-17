# C 03 Exercício 01
---

- Reproduzir de forma idêntica o funcionamento da função `strncmp` (man strncmp).

- Ela deverá ser prototipada da seguinte maneira:
```
int ft_strncmp(char *s1, char *s2, unsigned int n);
```

---
---

A função `printf` não faz parte da solução da questão.

#### Declarando a função:
    int ft_strncmp(char *s1, char *s2, unsigned int n){

        unsigned int i;

        for(i=0; i<n && (s1[i] && s2[i]); i++){
            if(s1[i] < s2[i]){
                return -1;
            }
            else if(s1[i] > s2[i]){
                return 1;
            }
        }
        return 0;
    }

O funcionamento é praticamente igual ao do exercício anterios `exercicio00.md`.
> Repare na condição do ciclo for `i<n && (s1[i] && s2[i])`, agora responda qual será o resultado do retorno da função quando `n` for maior que o comprimento de uma das string.

#### Código completo:	
    #include<stdio.h>

    int ft_strncmp(char *s1, char *s2, unsigned int n);

    int main(void){
        char s1[100] = "hello world", s2[100] = "hellO world", s3[100] = "hello world";
        
        printf("%d\n", ft_strncmp(s1, s2, 6));
        printf("%d\n", ft_strncmp(s1, s3, 100));
        printf("%d\n", ft_strncmp(s1, s3, 200));
        return 0;
    }

    int ft_strncmp(char *s1, char *s2, unsigned int n){

        unsigned int i;

        for(i=0; i<n && (s1[i] && s2[i]); i++){
            if(s1[i] < s2[i]){
                return -1;
            }
            else if(s1[i] > s2[i]){
                return 1;
            }
        }
        return 0;
    }

---
---

## Documentação:

> https://www.tutorialspoint.com/c_standard_library/c_function_strncmp.htm 