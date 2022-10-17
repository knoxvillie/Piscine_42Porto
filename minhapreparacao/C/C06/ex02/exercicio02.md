# C 06 Exercicio 02
---

- A questão aqui é sobre um <u>programa</u>, você deve, portanto, ter uma função *main* no seu arquivo arquivo .c.

- Escreva um programa que mostre os argumentos recebidos na linha de comando.

- Um por linha na ordem inversa da linha de comando.

- Você deve mostrar todos os argumentos, menos argv[0].

---
---

#### Declarando a função:
    int main(int argc, char *argv[]){
        for(int i = argc-1; i > 0; i--){
            for(int j = 0; argv[i][j]; j++){
                ft_putchar(argv[i][j]);
            }
            ft_putchar('\n');
        }
        return 0;
    }

#### Código completo:
    #include<unistd.h>

    void ft_putchar(char c);

    int main(int argc, char *argv[]){
        for(int i = argc-1; i > 0; i--){
            for(int j = 0; argv[i][j]; j++){
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

> exercicio01.md

> C Completo Total