# C 02 Exercício 05
---

- Escreva uma função que retorne 1 se a string passada como parâmetro só contiver caracteres alfabéticos maiúsculos e retorne 0 se a função contiver outros tipos de caracteres.

-Ela deverá ser prototipada da seguinte maneira:
```
int ft_str_is_uppercase(char *str);
```

- Ela deverá retornar 1 se `str` for uma string vazia.

---
---

A função `prinft` não faz parte da solução da questão.

> Leia a resolução dos exercício anteriores para enterder a lógica da resolução.

#### Declarando a função:
    int ft_str_is_uppercase(char *str){
        int i, is_uppercase = 1;

        for(i=0; str[i] != '\0'; i++){
            if(!(str[i]>='A' && str[i]<='Z')){
                is_uppercase = 0;
                break;
            }
        }
        return is_uppercase;
    }

#### Código completo:

    #include<stdio.h>

    int ft_str_is_uppercase(char *str);

    int main(void){
        char text[] = {"TUDOGRANDE SEPARADO"};

        printf("%d", ft_str_is_uppercase(text));
        return 0;
    }

    int ft_str_is_uppercase(char *str){
        int i, is_uppercase = 1;

        for(i=0; str[i] != '\0'; i++){
            if(!(str[i]>='A' && str[i]<='Z')){
                is_uppercase = 0;
                break;
            }
        }
        return is_uppercase;
    }

---
---

## Documentação:

> C Completo Total
