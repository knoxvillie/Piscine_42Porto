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