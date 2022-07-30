# C 02 Exercício 02
---

- Escreva uma função que retorne 1 se a string passada como parâmetro só contiver caracteres alfabéticos e retorne 0 se a a string contiver outros tipos de caracteres.

- Ela deverá ser prototipada da seguinte maneira:
```
int ft_str_is_alpha(char *str);
```

- Ela deverá retornar 1 se `str` for uma sting vazia.

---
---
==A Função `printf` não faz parte da solução da questão.==

![Tabela ASCII](https://upload.wikimedia.org/wikipedia/commons/thumb/d/dd/ASCII-Table.svg/1107px-ASCII-Table.svg.png)

#### Declarando a função:
    int ft_str_is_alpha(char *str){
        int i, is_alpha = 1;
        
        for(i=0; str[i]!='\0'; i++){
            printf(" %d", str[i]);
            if( !(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')){
                is_alpha = 0;
                break;
            } 
        }
        return is_alpha; 
    }

Entenda o código:
> - A declaração da variável `int is_alpha` é no sentido de evitar um retorno sempre que um ciclo seja iniciado.
> - O ciclo `for` só é executado ==Até e Se== a condição `str[i]!='\0'` for verdadeira. Esse já nos garante que se a string for vazia então o ciclo sequer é iniciado e `is_alpha = 1`. Ou percorremos a sting até que seja encotrado seu final `'\0'`, byte nulo.
>- Se o valor da tabela ASCII do elemento `str[i]` ==Não estiver== entre o valor ASCII de `a` e `z` ou entre `A` e `Z` então não é alfabético. Se isso acontecer `is_alpha = 0`. Repare que `break` encerra o ciclo `for` na primeira ocorrência do um elemento não alfabético.
> - `return is_alpha;` retorna 1 se a string for vazia ou se só contiver caracteres alfabéticos, retorna 0 se contiver qualquer um outro.

#### Código completo:
    #include<stdio.h>

    int ft_str_is_alpha(char *str);

    int ft_str_is_alpha(char *str){
        int i, is_alpha = 1;
        
        for(i=0; str[i]!='\0'; i++){
            printf(" %d", str[i]);
            if( !(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')){
                is_alpha = 0;
                break;
            } 
        }
        return is_alpha; 
    }

    int main(void){
        char str[20] = "helloworld";

        printf(" %d", ft_str_is_alpha(str));

        return 0;
    }

---
---

## Documentação:

> https://www.javatpoint.com/c-break

> https://www.todamateria.com.br/tabela-verdade/

> https://stackoverflow.com/questions/4142745/initialize-a-string-in-c-to-empty-string

> https://www.tutorialspoint.com/cprogramming/c_operators.htm

> https://pt.m.wikipedia.org/wiki/Ficheiro:ASCII-Table.svg