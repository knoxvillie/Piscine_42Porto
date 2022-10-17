# C 00 Exercício 01:
---
- Excreva uma função que mostre o alfabeto em minúsculo em apenas uma lina, em ordem crescente, começando pela letra 'a'.
- Ela deve ser prototipada da seguinte maneira:
    ``` 
    void ft_print_alphabet(void);
    ```
---
---

> Como já sabemos, para usarmos a função write devemos importar `#include <unistd.h>`.

#### Prototipando a função `ft_print_alphabet`:
    void ft_print_alphabet(void);

> Definimos void como tipo pois a função não retorna nada. Damos o nome de ft_print_alphabet a função. Como a função não recebi nenhum parâmetro formal, inserimos o void.

#### Declaração da função `ft_print_alphabet`:
    void ft_print_alphabet(void){
        char letra = 'a';

        while(letra <= 'z'){
            write(1, &letra, 1);
            letra++;
        } 
    }
> Se você assim como eu aprendeu Python antes de C, vai ficar realmente confuso quanto ao comando de incremento `letra++` já que letra é do tipo char. 

Resumindo: Quando o compilador encontra uma operação aritimética com uma variável de tipo char, ele promovem o tipo da variável a int, apenas durante a operação.
    ==Ler sobre promoção de tipo e grau de operandos.==
#### Contrução de `main()` com a chamada da funçao `ft_print_alphabet`:
    int main(void){
        ft_print_alphabet();
        return 0;
    }

#### Programa completo:
    #include <unistd.h>

    void ft_print_alphabet(void);

    void ft_print_alphabet(void){
        char letra = 'a';

        while(letra <= 'z'){
            write(1, &letra, 1);
            letra++;
        }
    }

    int main(void){
        ft_print_alphabet();
        return 0;
    }

## Documentação:

> Livro C Completo Total

https://www.delftstack.com/pt/howto/c/convert-int-to-char/
