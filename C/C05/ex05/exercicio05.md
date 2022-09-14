# C 05 Exercício 05
---

- Escreva uma funçãoo que retorne a raiz quadrada inteira de um número se ela existir, e 0 se a raiz quadrada não for inteira.

- Ela deverá  ser prototipada da seguinte maneira:
```
int ft_sqrt(int nb);
```

---
---
==A função `printf` não faz parte da solução original==

####Declarando a função:
    int ft_sqrt(int nb){
        int num = 0;

        while (num*num < nb){
            num++;
        }
        if (num*num == nb){
            return num;
        }
        else{
            return 0;
        }
    }

Entenda o código:
- Quando `num*num` resultar em um valor maior ou igual a `nb`, então: Se `num*num` igual a `nb`, `num` é o quadrado perfeito. Se não, `nb` < `num*num`, ou seja não possui raiz inteira.

#### Código completo:
    #include<stdio.h>

    int ft_sqrt(int nb);

    int main(void){
        int numero = 999;
        
        printf("%d ", ft_sqrt(numero));
        return 0;
    }

    int ft_sqrt(int nb){
        int num = 0;

        while (num*num < nb){
            num++;
        }
        if (num*num == nb){
            return num;
        }
        else{
            return 0;
        }
    }

---
---

## Documentação:
> https://mundoeducacao.uol.com.br/matematica/calculando-raiz-quadrada-um-numero.htm
