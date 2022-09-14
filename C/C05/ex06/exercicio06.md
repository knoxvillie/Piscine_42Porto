# C 05 Exercício 06

---

- Escreva um função que retorne 1 se o número for primo e 0 se não for.

- Ela deverá ser prototipada da seguinte maneira:	
```
int ft_is_prime(int nb);
```

---
---

==A função `printf` não faz parte da solução original==

#### Declarando a função:
    int ft_is_prime(int nb){
        int num = 2;

        if (nb == 0 || nb == 1){
            return 0;
        }
        while (num < nb){
            if (nb%num == 0){
                return 0;
            }
            else num++;
        }
        return 1;
    }

Entenda o código:
- Percorre-se todos os números de 2 até `nb-1`, se neste intervalo houver um número que divida `nb` sem deixar resto, então `nb` não é primo. Se não `nb` é primo.
>   Perceba que esse algoritmo resolve o problema mas nem de longe é a melhor solução. Reflita sobre o seguinte código e responda por que é melhor solução.

#### Declarando a função:
    int ft_is_prime(int nb){
        int num = 2;

        if (nb < 2){
            return 0;
        }

        while (num <= nb/2){
            if (nb % num == 0){
                return 0;
            }
            else num++;
        }

        return 1;
    }

#### Código completo:
    #include<stdio.h>

    int ft_is_prime(int nb);

    int main(void){
        int numero = 591;

        printf("%d ", ft_is_prime(numero));
        return 0;
    }

    /*
    int ft_is_prime(int nb){
        int num = 2;

        if (nb == 0 || nb == 1){
            return 0;
        }
        while (num < nb){
            if (nb%num == 0){
                return 0;
            }
            else num++;
        }
        return 1;
    }
    */

    int ft_is_prime(int nb){
        int num = 2;

        if (nb < 2){
            return 0;
        }

        while (num <= nb/2){
            if (nb % num == 0){
                return 0;
            }
            else num++;
        }

        return 1;
    }

---
---

## Documentação:

> https://pt.wikipedia.org/wiki/Crivo_de_Erat%C3%B3stenes

> https://pt.wikipedia.org/wiki/N%C3%BAmero_primo
