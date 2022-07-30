# C 00 Exercício 02
---

- Escreva uma função que mostre o alfabeto em minúsculo em apenas uma linha, em ordem decrescente, começando pela letra 'z'.

- Ela deve ser portotipada da seguinte maneira:
```
void ft_print_reverse_alphabet(void);
```
---
---
Este é exercício é basicamente a cópia do anterior. Em vez de incrementar a variável `letra` vamos decrementar. Por isso todos os princípios aprensentados no `exercicios01.md` serão reutilizados.

#### Prototipando a função:
    void ft_print_reverse_alphabet(void);
#### Declarando a função:
    void ft_print_reverse_alphabet(void){
        char letra = 'z';

        while(letra >= 'a'){
            write(1, &letra, 1);
            letra--;
        }
    }

#### Escrevendo `main()`:
    int main(void){
        ft_print_reverse_alphabet();
        return 0;
        }
#### Código completo:
    #include <unistd.h>

    void ft_print_reverse_alphabet(void);

    void ft_print_reverse_alphabet(void){
        char letra = 'z';
        while(letra >= 'a'){
            write(1, &letra, 1);
            letra--;
        }
    }

    int main(void){
        ft_print_reverse_alphabet();
        return 0;
    }

## Documentação:
>Livro C Completo Total