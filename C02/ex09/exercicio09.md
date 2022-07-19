# C 02 Exercício 09
---

- Escreva uma função que deixe a primeira letra de cada palavra em maiúsculo e o resto da palavra em minúsculo.

- Uma palavra é uma sequência de caracteres alfanuméricos.

- Ela deverá ser prototipada da seguinte maneira:
```
char *ft_strcapitalize(char *str);
```

- Ela deverá retornar `str`.

- Por exemplo:
> oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um

- Deve resultar:
> Oi, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Um

---
---

#### Declarando a função:
    char *ft_strcapitalize(char *str){
        int i, iniciopalavra = 1;

        for(i=0; str[i]!='\0'; i++){

            if(iniciopalavra && (str[i]>='a' && str[i]<='z')){
                str[i] -= 32;
                iniciopalavra = 0;
            }

            else if(!(str[i]>='a' && str[i]<='z') && !(str[i]>='A' && str[i]<='Z') && !(str[i]>='0' && str[i]<='9')){
                iniciopalavra = 1;
            }

            else if(!iniciopalavra && (str[i]>='A' && str[i]<='Z')){
                str[i] += 32;
            }
            
            else {
                iniciopalavra = 0;
            }        
        }

        return str;
    }

Entenda o código:
> - O coração do código é a variável `iniciopalavra`.
> - O ciclo `for` percorre toda a string, até '\0'.
> - O Primeiro `if` verifica se é um início de palavra ou seja `iniciopalavra == 1` e se o elemento da `str[i]` é uma letra minúscula, se for então a letra se torna maiúscula e não se trata mais de um início de palavra.
> - O primeiro `else if` verifica se o elemento de índice `str[i]` não é alfanumérico, se verdade então temos um início de palavra `iniciopalavra = 1`. 
> - O segundo `else if` veriifica se não estamos no início de palavra e o elemtendo de índice `str[i]` é maísculo, se for então o tornamos minísculo.
> - Se nada for verdade então estamos no meio de uma palavra `iniciopalavra = 0` e o elemento de índice `str[i]` é uma letra miníscula.

#### Código completo:

A função `printf` não faz parte da solução da questão.

    #include<stdio.h>

    char *ft_strcapitalize(char *str);

    int main(void){
        char texto[] = "oi, tudo bem? 42PAlavraS quarenta-e-duas; cinquenta+e+um";
        
        printf("%s", ft_strcapitalize(texto));
        return 0;
    }

    char *ft_strcapitalize(char *str){
        int i, iniciopalavra = 1;

        for(i=0; str[i]!='\0'; i++){

            if(iniciopalavra && (str[i]>='a' && str[i]<='z')){
                str[i] -= 32;
                iniciopalavra = 0;
            }

            else if(!(str[i]>='a' && str[i]<='z') && !(str[i]>='A' && str[i]<='Z') && !(str[i]>='0' && str[i]<='9')){
                iniciopalavra = 1;
            }

            else if(!iniciopalavra && (str[i]>='A' && str[i]<='Z')){
                str[i] += 32;
            }
            
            else {
                iniciopalavra = 0;
            }        
        }

        return str;
    }

---
---

## Documentação:

> C Completo Total

> http://facweb.cs.depaul.edu/sjost/it212/documents/ascii-pr.htm