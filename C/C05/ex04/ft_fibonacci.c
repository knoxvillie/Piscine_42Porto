#include<stdio.h>

int ft_fibonacci(int index);

int main(void){
    int numero = 10;

    printf("%d ", ft_fibonacci(numero));
    return 0;
}

int ft_fibonacci(int index){
 
    if (index < 0){
        return -1;
    }
    else if (index == 0){
        return 0;
    }
    else if( index == 1){
        return 1;
    }
    else{
        return (ft_fibonacci(index-1) + ft_fibonacci(index-2));
    }
}
