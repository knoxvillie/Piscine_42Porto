# C 02 Exercício 07
---

- Escreva uma função que deiixe todas as letras em maísculo.

-Ela deverá ser prototipada da seguinte maneira:
```
chat *ft_strupcase(char *str);
```

-Ela ddeverá retornar `str`.

---
---

A função `printf` não faz parte da solução da questão.

#### Declaração da função:
    char *ft_strupcase(char *str){
        int i;
        for(i=0; str[i]!='\0'; i++){
            if(str[i]>='a' && str[i]<='z'){
                str[i] -= 32;
            }
            else continue;
        }
        return str;
    }

> Repare que o problema pede para escrever uma função que deixe todas as letras em maísculo, não fala nada de números e printable characters. 
> - Portanto se o valor da tabela ASCII do índice `str[i]` não estiver entre o valor ASCII de `a` e `z`, nada é feito e seguimos para a próxima iteração do ciclo. Por este motivo utilizamos `continue`. 
> - Se o valor estiver entre o valor ASCII de `a` e `z`, a `str[i] -= 32;`, pois as letras maiúsculas estão deslocadas 32 posições nas minúsculas na tabela ASCII.

> [TABELA ASCII](http://facweb.cs.depaul.edu/sjost/it212/documents/ascii-pr.htm)

Aqui está a declaração da mesma função com a lógica inversa.
#### Declaração da função:
    char *ft_strupcase(char *str){
        int i;

        for(i=0; str[i]!='\0'; i++){
            if(!(str[i]>='a' && str[i]<='z') || str[i]>='A' && str[i]<='Z'){
                continue;
            }
            else{
                str[i] = str[i] - 32;
            }
        }
        return str;
    }

Para a resolução deste problema siga o [exercicio02.md](/c02/ex02/exercicio02.md).

#### Código completo:
    #include<stdio.h>

    char *ft_strupcase(char *str);

    int main(void){
        char str[] = "tudoaquiepqueno";
        char str2[] = "N3m tud0 4aqu1 3 p3qu3n0";

        printf("%s ", ft_strupcase(str));
        printf("%s", ft_strupcase(str2));
        return 0;
    }

    char *ft_strupcase(char *str){
        int i;
        for(i=0; str[i]!='\0'; i++){
            if(str[i]>='a' && str[i]<='z'){
                str[i] -= 32;
            }
            else continue;
        }
        return str;
    }

    /*
    char *ft_strupcase(char *str){
        int i;

        for(i=0; str[i]!='\0'; i++){
            if(!(str[i]>='a' && str[i]<='z') || str[i]>='A' && str[i]<='Z'){
                continue;
            }
            else{
                str[i] = str[i] - 32;
            }
        }
        return str;
    }
    */

---
---

## Documentação:
> C Completo Total

> http://facweb.cs.depaul.edu/sjost/it212/documents/ascii-pr.htm