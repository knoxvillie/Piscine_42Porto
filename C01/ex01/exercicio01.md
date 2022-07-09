# C 01 Exercício 01
---
- Escreva uma função que tenha um ponteiro para ponteiro para ponteiro para ponteiro para ponteiro para ponteiro para ponteiro para ponteiro para ponteiro para `int` em parâmetro e dê ao `int` o valor de 42.

- Ela deverá ser prototipada da seguinte maneira:
```

void ft_ultimate_ft(int *********nbr);
```
---
---

#### Declarando a função:
    void ft_ultimate_ft(int *********nbr){
        *********nbr = 42;
    }

> Repare que o ponteiro mais externo agora recebe na memória o valor `42`.

Por sí só a função é solução do problema. Por questões didáticas usaremos a função `printf` para ilustrarmos o funcionamento do problema.

#### Declaração de main:

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
> Já que estamos trabalhando com ponteiro de ponteiroo ... de ponteiro, devemos declará-los em cascata. Em seguida a inicialização se dá também em cascata partindo do endereço de `numero` até o ponteiro mais externo. Note que desse modo todos os ponteiros apontam para seu antecessor que por sua vez aponta para o endereço da memória de `numero`. Chamando `ft_ultimate_ft` o valor da variável no endereço de memória que os ponteiros apontam agora vale 42.

#### Código completo:
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

---
---

## Documentação:

> C Completo Total.