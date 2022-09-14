# C 05 Exercício 00
---
  - Escreva uma função iterativa que retorn um número. Esse número deve ser o resultado da operação fatorial a partir do número passado como parâmetro.

  - Se o argumento não for válido, a função deve retornar 0.

  - Não se deve gerar "int overflow", o retorno da função será infefinido.

  - Ela deverá ser prototipada da seguinte maneira:
  ```
  int ft_iterative_factorial(int nb);
  ```

---
---

==A Função `printf` não faz parte da suloção da questão==

#### Declarando a função:
    int ft_iterative_factorial(int nb){
        int fatorial = 1, i = 1;

        if(nb < 0 && nb > 12){
            return 0;
        }

        while(i <= nb){
            fatorial*=i;
            i++;
        }
        return fatorial;
    }

Entenda o código:
- Importante saber a diferênça entre recursividade e iteratividade. Consulte documentação.

- Sendo 1 o elemento neutro da multiplicação implica `fatorial = 1`. Começaremos a contar de `i = 1`.

- Tendo uma variável do tipo `int` 4 bytes de tamanho, no qual pertence ao intervalo de (-2147483648, 2147483647) o maior inteiro fatorial que se pode armazenar sem overflow é 12. O limite inferior `0` se dá pela definição de fatorial. Se `nb` menor que `0` e maior que `12`, a função retornará `0`.

#### Código completo:
    #include<stdio.h>

    int ft_iterative_factorial(int nb);

    int main(void){
        int numero = 12;

        printf("%d ", ft_iterative_factorial(numero));

        return 0;
    }

    int ft_iterative_factorial(int nb){
        int fatorial = 1, i = 1;

        if(nb < 0 && nb > 12){
            return 0;
        }

        while(i <= nb){
            fatorial*=i;
            i++;
        }
        return fatorial;
    }

---
---

## Documentação:

> http://dan-scientia.blogspot.com/2009/08/funcoes-recursivas-e-funcoes-iterativas.html

> https://pt.wikipedia.org/wiki/Fatorial

