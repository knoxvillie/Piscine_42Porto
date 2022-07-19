# C 02 Exercício 06
---

- Escreva uma funçãoo que retorne 1 se a string passada como parâmetro só contiver caracteres imprimíveis e retorne 0 se a função contiver outros tipos de caracteres.

- Ela deverá ser prototipada da seguinte maneira:
```
int ft_str_is_printable(char *str);
```

- Ela deverá retornar 1 se `str` fot uma string vazia.

---
---
> ASCII Table / Printable Characteres:
> http://facweb.cs.depaul.edu/sjost/it212/documents/ascii-pr.htm

A lógica de resolução é a mesma dos exercício anteriores.

A fução `printf` não faz parte da solução da questão.

#### Declarando a função:
    int ft_str_is_printable(char *str) {
        int i, is_printable = 1;

        for(i=0; str[i] != '\0'; i++){
            if(!(str[i]>= ' ' && str[i]<= '~')){
                is_printable = 0;
                break;
            }
        }
        return is_printable;
    }

#### Código completo:

    #include<stdio.h>

    int ft_str_is_printable(char *str);

    int main(void){
        char str[] = "=)(/&$ #\0#$89iksainre";

        printf("%d", ft_str_is_printable(str));
        printf("%s", str);
        return 0;
    }

    int ft_str_is_printable(char *str) {
        int i, is_printable = 1;

        for(i=0; str[i] != '\0'; i++){
            if(!(str[i]>= ' ' && str[i]<= '~')){
                is_printable = 0;
                break;
            }
        }
        return is_printable;
    }

Reflita a função `main` e sem executar o código responda: Qual é o tamanho da string `str`? e qual será o resultado da linha ```printf("%s", str),```?

---
---

## Documentação:
> C Completo Total

> http://facweb.cs.depaul.edu/sjost/it212/documents/ascii-pr.htm