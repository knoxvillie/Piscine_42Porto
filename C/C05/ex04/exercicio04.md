# C 05 Exercício 04
---

- Escreva uma função `ft_fibonacci` que retorne o n-iésimo elemento da sequência de Fibonacci, sendo o primeiro elemento com índice 0. Vamos considerar que a sequência de Fibonacci começa por 0, 1, 1, 2.

- Overflows não devem ser gerados.

- Ela deverá ser prototipada da seguinte maneira:
```
int ft_fibonacci(int index);
```

- Evidentemente, `ft_fibonacci` deverá ser recursiva.

- Se `index` for inferior a 0, a função retornará -1.

---
---

==A função `printf` não faz parte da solução==
- ==Fazer tratamento de overflow==

#### Declarando a função:
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

Entenda o código:
- Com a recursividade da função, o resultado será um somatório de 0, 1 e -1.

#### Código completo:
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

---
---

## Documentação

> https://pt.wikipedia.org/wiki/Sequ%C3%AAncia_de_Fibonacci
