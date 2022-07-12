# C 01 Exercício 08
---

- Escreva uma função que ordene uma matriz de inteiros em ordem crescente.

- Os parâmetros são um ponteiro para inteiro e o número de inteiros na matriz.

- A função deverá ser prototipada da seguinte maneira:
```
void ft_sort_int_tab(int *tab, int size);
```

---
---

#### Declarando a função:
    void ft_sort_int_tab(int *tab, int size){
        int i = 0, j, temp;

        for(i; i < size; i++){
            temp = tab[i]

            for(j=i; j < size; j++){
                
                if(temp < tab[j]){

                    temp = tab[j];
                    tab[j] = tab[i];
                    tab[i] = temp;
                }
            }
        }
    }

Entenda o código:
Antes de qualquer comparação o primeiro valor do índice atual é sempre o maior por defeito `temp = tab[i]`.

- O primeiro laço `for` define o número de interações que deverão ocorrer para que todos os elementos da matriz sejam percorridos. Devemos iniciar no índice `0` até `size-1`.
- O segundo laço `for` percorre o restante da matriz que ainda não foi percorrida.

Quando `i=0` e `j=0` o segundo laço percorre a totalizade da matriz e salva no primeiro índice `tab[i]` o maior valor entre todos.
Na segunda interação do segundo laço, o programa já não precisará percorrer toda a matriz novamente, uma vez que o maior valor entre todos já está salvo no indice `tab[i]` onde `i=0`. Sendo assim vamos comprar apenas os índices restantes e achar o maior valor entre eles, que por sua vez será certamente menor que `tab[i]`.

Sempre que um valor é maior que o valor de `temp` seus índices são trocados.

> A função `printf` não faz parte da solução original da questão. 

#### Código completo:
    #include <stdio.h>

    void ft_sort_int_tab(int *tab, int size);

    void ft_sort_int_tab(int *tab, int size){
        int i = 0, j, temp = 0;

        for (i = 0; i < size; i++){
            temp = tab[i];
    
            for (j=i; j < size; j++){            
                if (temp < tab[j]){
                    
                    temp = tab[j];
                    tab[j] = tab[i];
                    tab[i] = temp; 
                }
            }
        }
        for (i=0; i < size; i++) printf("%d ", tab[i]);
    }

    int main(void){
        int tamanho = 10, matriz[] = {10,1,32,12,-5,3,-20,34,-290,0};

        ft_sort_int_tab(matriz, tamanho);
        return 0;
    }

---
---

## Documentação:

> C Completo Total