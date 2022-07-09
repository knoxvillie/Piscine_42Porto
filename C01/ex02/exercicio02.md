# C 01 Exercício 02
---
- Escreva uma função que troque o conteúdo de dois inteiros cujos endereços são dados em parâmetros.

- Ela deverá ser prototipada da seguinte maneira:
```
void ft_swap(int *a, int *b);
```
---
---
#### Delcaração da função:
    void ft_swap(int *a, int *b){
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
    }
> Usamos o operador unário para atribuir ao valor de um endereço o valor de outro endereço.

> A problma original não tem a necessidade do uso da função `printf`, usarei aqui para um finalidade didática.

#### Código completo:
    #include <stdio.h>

    void ft_swap(int *a, int *b);

    void ft_swap(int *a, int *b){
        int temp;

        temp = a*
        *a = *b;
        *b = temp;
    }

    int main(void){
        int valor_a, valor_b;

        ft_swap(valor_a, valor_b);
        printf("%d\n", valor_a);
        printf("%d\n", valor_b);
        return 0;
    }


## Documentação:
    
> C Completo Total