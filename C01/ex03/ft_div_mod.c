#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

void ft_div_mod(int a, int b, int *div, int *mod){

	*div = a/b;
	*mod = a%b; 
}

int main(void){
	int valor_a, valor_b, pont_div, pont_rest;
	
	valor_a = 10;
	valor_b = 3;

	ft_div_mod(valor_a, valor_b, &pont_div, &pont_rest);
	printf("Valor div: %d\nValor resto: %d\n", pont_div, pont_rest);
	return 0;
}
