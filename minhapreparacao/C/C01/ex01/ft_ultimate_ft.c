#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

void ft_ultimate_ft(int *********nbr){
	*********nbr = 42;
}

int main(void){
	int *********nbr; 
	int ********nbr8;
	int *******nbr7;
	int ******nbr6;
	int *****nbr5;
	int ****nbr4;
	int ***nbr3;
	int **nbr2;
	int *nbr1;
	int numero = 0;

	nbr1 = &numero;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr = &nbr8;

	
	ft_ultimate_ft(nbr);
	printf("%d", numero);
	return 0;
}
