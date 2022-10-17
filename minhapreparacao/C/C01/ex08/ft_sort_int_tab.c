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