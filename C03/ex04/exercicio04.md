# C 03 Exercício 04

---

- Reproduzir de forma idêntica o funcionamento da função `strstr` (man strstr).

- Ela deverá ser prototipada da seguinte maneira:
```
char *ft_strstr(char *str, char *to_find);
```

---
---

#### Declarando a função:
    char *ft_strstr(char *str, char *to_find){
    int i = 0, j = 0;

    if(!to_find){
            return str;
    }

    for(; str[i]; i++){
            
            for(;str[i+j] == to_find[j]; j++){
                
                if(to_find[j+1] == '\0'){
                    
                    return (str + i);
                }
            }
            j = 0;
    }
    return 0;
    }     

Entenda o código:
> - Usaremos o inteiro `i` como índice da string `str` e `j` para `to_find`.
> - O primeiro ciclo `for` garante que a string seja percorrida até o seu final.
> - O segundo ciclo `for` garante quando ocorra a condição `str[i+j] == to_find[j]`, ou seja um elemento de índice `str[i]` é igual ao primeiro elemento de `to_find` pois `j=0`. A partir disto checamos se o próximo elemento de `to_find` é igual a byte nulo, se for então encontramos a string completa que procurávamos em `str`, então retornamos um ponteiro que aponta para a primeira ocorrência de `to_find` em `str`.
> - Se um ou mais, porém ==Não todos== elemento de `to_find[j]` forem iguais a `str[i+j]`, então não encontramos uma equivalencia total de `to_find` em `str` o que resulta em `return 0;`

Reflita sobre isso:
Lendo `man strstr` verificamos que se não encontrarmos a ocorrência total de `to_find` em `str` a função retornará nulo. Em nosso código estamos retornando `return 0;`. Neste caso estamos retornando um inteiro? Lembre-se de que na definição da função: `char * ft_strstr()`.

#### Código completo:
    #include<stdio.h>

    char *ft_strstr(char *str, char *to_find);

    int main(void){
        char fonte[20] = "hello world", str[20] = "ell";
        
        printf("%s", ft_strstr(fonte, str));
        return 0;
    }

    char *ft_strstr(char *str, char *to_find){
    int i = 0, j = 0;

    if(!to_find){
            return str;
    }

    for(; str[i]; i++){
            
            for(;str[i+j] == to_find[j]; j++){

                if(to_find[j+1] == '\0'){
                    
                    return (str + i);
                }
            }
            j = 0;
    }
    return 0;
    }

Nem preciso lembrar de que a função `printf` não faz parte da solução da questão, correto?

---
---

## Documentação:

> https://m.cplusplus.com/reference/cstring/strstr/

> `man strstr`
