# C 01 Exercício 07
---

- Escreva uma função que inverta a ordem dos elementos de uma matriz de inteiros.

- Os parâmetros são um ponteiro para inteiro e o número de inteiros na matriz.

- A função deverá ser prototipada da seguinte maneira:

```
void ft_rev_int_tab(int *tab, int size);
```
---
---
> O uso da função `printf` não é aceita na resolução original da questão. Userei pr fins ilustrativos apenas.

#### Declaração da função:
Pense na expressão `tab[i]` e `tab[size-(i+1)]` como índices simétricos da matriz.

    void ft_rev_int_tab(int *tab, int size){
    
    int i = 0, temp;

    for (i = 0; i <= size-(i+1); i++){

        temp = tab[i];
        tab[i] = tab[size-(i+1)];
        tab[size-(i+1)] = temp;
    }
    for (i = 0; i < size; i++) printf("%d", tab[i]);

    }

> - Repare que `tab[size-(i+1)]` aponta para o último elemento da matriz, já que a sua identação começa em 0.
> - Note que no caso do tamanho da matriz ser ímpar, o valo do índice `tab[i]` será igual ao valor de `tab[size-(i+1)]`, mantendo assim o valor do índice.

Caso não houvesse necessidade em alterar a matriz original, poderíamos substituir a função por esta:
#### Declaração da função (Opicional):
    void ft_rev_int_tab(int *tab, int size){
    int i;

        for (i = 0; i <= size-1; i++){
            printf("%d", tab[size-(1+i)]);    
        }
    }

> Repare que mantemos a matriz original. O que de fato estamos fazendo é imprimir a matriz ao contrário.

#### Cóodigo completo:
    #include <stdio.h>

    void ft_rev_int_tab(int *tab, int size);

    /* Mantem a matriz e printa o inverso.
    void ft_rev_int_tab(int *tab, int size){
    int i;

        for (i = 0; i <= size-1; i++){
            printf("%d", tab[size-(1+i)]);    
        }
    }
    */

    void ft_rev_int_tab(int *tab, int size){
        int i = 0, temp;
        int cont = 0;

        for (i = 0; i <= size-(i+1); i++){
            temp = tab[i];
            tab[i] = tab[size-(i+1)];
            tab[size-(i+1)] = temp;
        }
        for (i = 0; i < size; i++) printf("%d", tab[i]);
    }

    int main(void){
        int matriz[5] = {1,2,3,4,5};
        int tamanho = 5;

        ft_rev_int_tab(matriz, tamanho);
        return 0;

    }

---
---

## Documentação:
> C Completo Total