# C 05 Exercício 02
---

- Escreva uma função iterativa que retorne uma potência de um número. Uma potência inferior a 0 retornará 0.

- Não se deve gerar "int overflow", o retorno da função será indefinido.

- Ela deverá ser prototipada da seguinte maneira:
```
int ft_iterative_powr(int nb, int power);
```
---
---

==A função `prinft` não faz parte do código.==

#### Declarando a função:
    int ft_iterative_power(int nb, int power){
        int resultado = 1;
        double p = 1;

        if(power < 0){
            return 0;
        }
        else if(power == 0){
            return 1;
        }
        while(power--){
            p*=nb; 
        }

        if(p < -2147483648 || p > 2147483647){
            return 0;
        }
        else{
            resultado = p;
            return resultado;
        }
    }

Entenda o código:
- Reflita sobre `while(power--)`, no caso de usarmos `while(--power)` qual seria o resultado para `nb=2` e `power=2`?

- Definimos uma varíável `p` de tipo `double` para a correta checagem e evitar overflow do inteiro que receberá este valor. Se o valor de `p` estiver fora do intervalo de 4bytes de um `int`, a função retorna 0.

#### Código completo:
    #include<stdio.h>

    int ft_iterative_power(int nb, int power);

    int main(void){
        int base, potencia;
        base = -2;
        potencia = 4;

        printf("Resultado: %d ", ft_iterative_power(base, potencia));
        return 0;
    }

    int ft_iterative_power(int nb, int power){
        int resultado = 1;
        double p = 1;

        if(power < 0){
            return 0;
        }
        else if(power == 0){
            return 1;
        }
        while(power--){
            p*=nb; 
        }

        if(p < -2147483648 || p > 2147483647){
            return 0;
        }
        else{
            resultado = p;
            return resultado;
        }
    }

## Documentação:

> https://stackoverflow.com/questions/26415365/return-value-is-undefined-in-c
