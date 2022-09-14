# C 05 Exercício 03
---

- Escreva uma função recursiva que retorne uma potência de um número.

- Não se deve gerar "int overflow", o retorno da função será indefinido.

- Ela deverá ser prototipada da seguinte maneira:
```
int ft_recursive_power(int nb, int power);
```

---
---

==A função `printf` não faz parte da solução.==

- ==Falta a lógica para potências negativas.==

#### Declarando a função:
    int ft_recursive_power(int nb, int power){
        int resultado;
        double p = 1;

        if(power == 0){
            return 1;
        }
        else if(power > 0){
            p = (nb * ft_recursive_power(nb, power-1));

            if(p <= -2147483648 || p >= 2147483647){
                return 0;
            }
            else{
                resultado = p;
                return resultado;
            } 
        } 
        return 0;
    }

Entenda o código:
- `p` recebe o valor de `nb` * a recursividade da função. No nível mais baixo ou seja `power=0` a função retorna 1 e inicia o ciclo de volta. Nesta etapa o `double` `p` é sempre testado para que o valor esteja dentro dos limites de um `int` de 4 bytes.
- O `return 0` do final da função trata do `else`, para `power < 0`. Tem importância para o compilador gcc -Werror.

#### Código completo:
    #include<stdio.h>

    int ft_recursive_power(int nb, int power);

    int main(void){
        int base, potencia;

        base = 2;
        potencia = 3;

        printf("%d ", ft_recursive_power(base, potencia));
        return 0;
    }

    /*
    int ft_recursive_power(int nb, int power){
        if (power == 0){
            return 1;
        }
        else{
            return (nb * ft_recursive_power(nb, power-1));
        }
    }
    */

    int ft_recursive_power(int nb, int power){
        int resultado;
        double p = 1;

        if(power == 0){
            return 1;
        }
        else if(power > 0){
            p = (nb * ft_recursive_power(nb, power-1));

            if(p <= -2147483648 || p >= 2147483647){
                return 0;
            }
            else{
                resultado = p;
                return resultado;
            } 
        } 
        return 0;
    }

---
---

## Documentação:

> man gcc (Werror)

> https://www.google.com/search?q=gcc+control+reaches+end+of+non-void+function&rlz=1C1VDKB_pt-PTPT1013PT1013&oq=gcc+control&aqs=chrome.6.69i57j0i19l5j0i19i22i30l4.6251j0j7&sourceid=chrome&ie=UTF-8

> https://stackoverflow.com/questions/2346806/what-is-a-segmentation-fault