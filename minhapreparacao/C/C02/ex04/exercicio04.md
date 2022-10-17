# C 02 Exercício 04
---

- Escreva uma funçãoo que retorne 1 se a string passada como parâmetro só contiver caracteres alfabéticoos minúsculo e retorne 0 se a função contiver outros tipos de caracteres.

- Ela deverá ser prototipada da seguinte maneira:
```
int ft_str_is_lowercase(char *str);
```

- Ela deverá retornar 1 se a `str` for uma string vazia.

---
---

#### Declarando a função:
    int ft_str_is_lowercase(char *str){
        int i, is_lower = 1;

        for(i = 0; str[i] != '\0'; i++){
            if(!(str[i] >= 'a' && str[i] <= 'z')){
                is_lower = 0;
                break;
            }
        }
        return is_lower;
    }

Repare que a resolução segue o raciocinio do exercício 02.
> - Se o elemento de índice `str[i]` não estiver entre o intervalo de valores ASCII de `a` e `z` então não é um caractere minúsculo.
> - `break` encerra o ciclo na ocorrência do primeiro elemento não alfabético minúsculo.

`printf` não faz parte da solução da questão.

#### Código completo:
    #include<stdio.h>

    int ft_str_is_lowercase(char *str);

    int main(void){
        char texto[] = "tudopequenoejunto";
        char texto1[] = "tudopequenoe separado";
        char texto2[] = "\0";

        printf("%d", ft_str_is_lowercase(texto));
        printf("%d", ft_str_is_lowercase(texto1));
        printf("%d", ft_str_is_lowercase(texto2));
    }

    int ft_str_is_lowercase(char *str){
        int i, is_lower = 1;

        for(i = 0; str[i] != '\0'; i++){
            if(!(str[i] >= 'a' && str[i] <= 'z')){
                is_lower = 0;
                break;
            }
        }
        return is_lower;
    }

---
---

## Documentação:
> https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm

> C Completo Total