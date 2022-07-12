# C 01 Exercício 03
---

- Escreva uma função `ft_div_mod` que tenha a seguinte prototipagem:
```
void ft_div_mod(int a, int b, int *div, int *mod);
```

- Essa função divide os dois parâmetros `a` e `b` e armazena o resultado no int apontado por `div`. Ela também armazena o resto da divisão de `a` e `b` no int apontado por `mod`.

---
---

#### Declarando a função:
    void ft_div_mod(int a, int b, int *div, int *mod){

        *div = a/b;
        *mod = a%b; 
    }

> A função `printf` não faz parte da solução original da questão.

#### Código completo:
    #include <stdio.h>

    void ft_div_mod(int a, int b, int *div, int *mod);

    void ft_div_mod(int a, int b, int *div, int *mod){

        *div = a/b;
        *mod = a%b; 
    }

    int main(void){
        int valor_a, valor_b, pont_div, pont_rest;
        
        valor_a = 10;
        valor_b = 3;

        ft_div_mod(valor_a, valor_b, &pont_div, &pont_rest);
        printf("Valor div: %d\nValor resto: %d\n", pont_div, pont_rest);
        return 0;
    }


---
---

## Documentação:

> C Completo Total