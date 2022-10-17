# C 02 Exercício 08
---

- Escreva uma função que deixe todas letras em minúsculo.

- Ela deverá ser prototipada da seguinte maneira:
```
char *ft_strlowcase(char *str);
```

- Ela deverá retornar `str`.

---
---

Ver solução do exercício anterior.

#### Declaração da função:
    char *ft_strlowcase(char *str){
        int i;

        for(i=0; str[i]!='\0'; i++){
            if(str[i]>='A' && str[i]<='Z'){
                str[i]+=32;
            }
        else continue;
        }
        return str;
    }

#### Código completo:
    #include<stdio.h>

    char *ft_strlowcase(char *str);

    int main(void){
        char str[] = "minusculo MINUSCULO M1N2SC2L0";

        printf("%s", ft_strlowcase(str));
        return 0;
    }

    char *ft_strlowcase(char *str){
        int i;

        for(i=0; str[i]!='\0'; i++){
            if(str[i]>='A' && str[i]<='Z'){
                str[i]+=32;
            }
        else continue;
        }
        return str;
    }

---
---

## Documentação:

> C Completo Total

> Exercício 07