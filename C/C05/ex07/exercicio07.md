# C 05 Exercício 07

---

- Escreva uma função que retoorne o númeroo primo imediatamente superiro ou igual ao número passado como parâmetro.

- Ela de ser prototipada da seguinte maneira:
```
int ft_find_next_prime(int nb);
```

---
---

==A função `printf` não faz parte da solução original=
- ==O problema não diz nada sobre overflows de inteiros.==

#### Declarando a função:
    int ft_find_next_prime(int nb){

        if (ft_is_prime(nb)){
            return nb;
        }
        
        else{
            while(!(ft_is_prime(++nb))){}
            return nb;
        }
    }

#### Função complementar:
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

Entenda o código:
- A checagem se `nb` é ou não primo fica a cargo de `ft_is_prime`.
- Se `nb` é primo, então `return nb`.
- Se não, incrementamos `nb` até acharmos o primo sucessor.
- Reflita sobre `while(!(ft_is_prime(++nb))){}`. Qual seria a diferença entre `++nb` e `nb++`?.

#### Código completo:
    #include<stdio.h>

    int ft_find_next_prime(int nb);
    int ft_is_prime(int nb);

    int main(void){
        
        printf("%d ", ft_find_next_prime(14));
        return 0;
    }

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

    int ft_find_next_prime(int nb){

        if (ft_is_prime(nb)){
            return nb;
        }
        
        else{
            while(!(ft_is_prime(++nb))){}
            return nb;
        }
    }

---
---

## Documentação:

> exercicio06.md 