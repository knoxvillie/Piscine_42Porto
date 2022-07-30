#C 01 Exercício 04
---
- Escreva uma função `ft_ultimate_div_mod` que tena a seguinte prototipagem:
```
void ft_ultimate_div_mod(int *a, int *b);
```
- Essa função divide os int apontados por `a` e `b`.
    O resultado da divisão está armazenado no int apontado por `a`.
    O resultado do resto da divisão está armazenado no int apontado por `b´.

---
---

#### Delcaração da função:
    void ft_ultimate_div_mod(int *a, int *b){
        int temp;

        temp = *a;
        *a = *a / *b;
        *b = temp % *b;
    }

#### Código completo:
    void ft_ultimate_div_mod(int *a, int *b);

    void ft_ultimate_div_mod(int *a, int *b){
        int temp;

        temp = *a;
        *a = *a / *b;
        *b = temp % *b;
    }

    int main(void){
        int valor_a, valor_b;

        ft_ultimate_div_mod(&valor_a, &valor_b);
    }

> Repare que os parâmetros passados na função são os endereços das variáveis, já que a função recebe um ponteiro.

---
---

## Documentação:
> C Completo Total