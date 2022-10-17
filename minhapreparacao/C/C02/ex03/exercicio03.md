# C 02 Exercício 03
---

- Escreva uma função que retorne 1 se a string passada como parâmetro só contiver números e retorne 0 se a string contiver outros tipos de caracteres.

- Ela deverá se prototipada da seguinte maneira:
```
int ft_str_is_numeric(char *str);
```

- Ela deverá retornar 1 se `str` for uma string vazia.

---
---

#### Declarando a função:
    int ft_str_is_numeric(char *str){
        int i, is_numeric = 1;

        for(i=0; str[i] != '\0'; i++){
            if(!(str[i] >= '0' && str[i] <= '9')){
                is_numeric = 0;
                break;
            }
        }
        return is_numeric;
    }

Conferir resolução do Exercício 02.
> - Se o valor da tabela ASCII do índice `str[i]` não estiver entre os valores ASCII de `0` e `9` então não é um número.
> - O ciclo é encerrado na primeira ocerrência de um elemento não numérico.

#### Código completo:

> A função `printf` não faz parte da solução do exercício.

    #include <stdio.h>

    int ft_str_is_numeric(char *str);

    int main(void){
        char texto[20] = "12345";
        printf("%d", ft_str_is_numeric(texto));

    }

    int ft_str_is_numeric(char *str){
        int i, is_numeric = 1;

        for(i=0; str[i] != '\0'; i++){
            if(!(str[i] >= '0' && str[i] <= '9')){
                is_numeric = 0;
                break;
            }
        }
        return is_numeric;
    }

---
---

## Documentação:

> exercicio02.md

> C Completo Total