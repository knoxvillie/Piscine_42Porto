# C 06 Exercicio 01

---

- A questão aqui é sobre um <u>programa</u>, você deve, portanto, ter uma função *main* no
seu arquivo arquivo .c.

- Escreva um programa que mostre os argumentos recebidos na linha de comando.

- Um por linha na mesma ordem da linha de comando

- Você deve mostrar todos os argumentos, menos argv[0].

- Exemplo :
```
$>./a.out test1 test2 test3
test1
test2
test3
$>
```

---
---

#### Declarando a função:
    int main(int argc, char **argv){
        for(int i = 1; i < argc; i++){
            for (int j = 0; argv[i][j]; j++){
                ft_putchar(argv[i][j]);
            }
            ft_putchar('\n');
        }
        return 0;
    }

Entenda o código:
- O primeiro `for` percorre os argumentos começando por 1, e o segundo `for` percorre as strings.
- Uma vez que `argc` é o inteiro que contém o número de argumentos passados como parâmetro + o nome do programa, podemos usá-lo como condicionante. 
- Reflita sobre: Usar `for(int i = 1; agrv[i]; i++){...}` resulta em algum problema?

#### Código completo:
    #include<unistd.h>

    void ft_putchar(char c);

    int main(int argc, char **argv){
        for(int i = 1; i < argc; i++){
            for (int j = 0; argv[i][j]; j++){
                ft_putchar(argv[i][j]);
            }
            ft_putchar('\n');
        }
        return 0;
    }

    void ft_putchar(char c){
        write(1, &c, 1);
    }

---
---

## Documentação:

> C Completo Total

> https://www.delftstack.com/pt/howto/c/argv-in-c/