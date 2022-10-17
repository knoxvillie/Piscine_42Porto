# C 06 Exercício 00

---

- A questão aqui é sobre um <u>programa</u>, você deve, portanto, ter uma função *main* no seu arquivo .c.

- Escreva um programa que mostre o nome do programa.

- Exemplo:
```
$>./a.out
./a.out
$>
```

---
---

#### Declarando a função:
    int main( int argc, char **argv){
        int i;
        
        for(i=0; argv[0][i] && argc; i++){
            ft_putchar(argv[0][i]);
        }
        return 0;
    }

Entenda o código:
- Sendo `argv[0]` o ponteiro que aponta para a string do nome do arquivo, usando `argv[0][1]` iteramos sobre a string até o byte nulo.
- A função ft_putchar printa `char` a `char`.
- O `argc` entra na condição do `for` uma vez que se não fosse usado seria gerado erro quando gcc -Werror.

#### Código completo:	
    #include<unistd.h>

    void  ft_putchar(char c);

    int main( int argc, char **argv){
        int i;
        
        for(i=0; argv[0][i] && argc; i++){
            ft_putchar(argv[0][i]);
        }
        return 0;
    }

    void ft_putchar(char c){
        write (1, &c, 1);
    }

---
---

## Documentação:

> C Completo Total

> https://www.delftstack.com/pt/howto/c/argv-in-c/