# C 01 Exercício 00
---
- Escreva uma função que tenha um ponteiro `int` em parâmetro e dê ao `int` o valor de 42.

- Ela deverá der prototipada da seguinte maneira:
```
void ft_ft(int *nbr);
```
---
---
#### Declarando a função:
    void ft_ft(int *nbr){
        *nbr = 42;
    }
> - Note que no parâmtero da função `ft_ft`, por se tratar de um ponteiro, devemos declará-lo como tal. Usamos o identificador `*`. Exemplo: `tipo *nome_ponteiro`.
> - Já na atribuição `*nbr = 42;` o * é o operador unário que devolver o valor da variável no endereço endereço de memória que o segue. 

O exercício em sí é resolvido com a declaração de `ft_ft`. Para fins didáticos acrescentaremos as funções `main` e a `printf`.

#### Função main:
    int main(void){
        int *nbr, numero;

        nbr = &numero;
        ft_ft(nbr);
        printf("%d", numero);
    }
> O operador unário `&` devolde o endereço na memória do seu operando, ou seja, o ponteiro `nbr` agora aponta para o mesmo endereço de memória de `numero`. Assim quando chamamos a função `ft_ft` atribuimos o valor 42 ao endereço de `nbr` que por sua vez aponta para `numero`.

#### Código completo:
    #include <stdio.h>

    void ft_ft(int *nbr);
    void ft_ft(int *nbr){
        *nbr = 42;
    }

    int main(void){
        int *nbr, numero;

        nbr = &numero;
        ft_ft(nbr);
        printf("%d", numero)
        prinft("%d", *nbr)
        return 0;
    }

---
---

## Documentação:

> C Completo Total