# C 05 Exercício 01
---

- Escreva uma função que retorne o fatorial doo número passado como parâmetro.

- Se o argumento não for válido, a funçãoo deve retornar 0.

- Não se deve gerar "int overflow", o retorno da função será indefinido.

- Ela deverá ser prototipada da seguinte maneira:
```
int ft_recursive_factorial(int nb);
```

---
---

==A função `printf` não faz parte da solução.==

#### Declarando a função:
    int ft_recursive_factorial(int nb){
        if(nb < 0 && nb > 12){
            return 0;
        }
        if(nb > 0){
            return (nb * ft_recursive_factorial(nb-1));
        }
        return 1;
    }

Entenda o código:
- O primeiro `if` trata do domínio do fatorial e dos limites que uma variável do tipo `int` pode armazenar sem dar overflow.
- Usaremos a recursividade da função até que `nb` seja zero. Quando isso acontecer ele retornará 1, que por sua vez será multiplicado pelo `nb+1` ou valor de `nb` anterior. Para `ft_recursive_factorial(3);` a seguinte sequência será realizada: (1x1)>(2x1)>(3x2), resultado em 6.

#### Código completo:
    #include<stdio.h>

    int ft_recursive_factorial(int nb);

    int main(void){
        int numero = 12;

        printf("%d ", ft_recursive_factorial(numero));
        return 0;
    }

    int ft_recursive_factorial(int nb){
        if(nb < 0 && nb > 12){
            return 0;
        }
        if(nb > 0){
            return (nb * ft_recursive_factorial(nb-1));
        }
        return 1;
    }

## Documentação:

> https://pt.wikipedia.org/wiki/Fatorial