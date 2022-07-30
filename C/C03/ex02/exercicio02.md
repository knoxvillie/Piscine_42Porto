# C 03 Exercício 02

---

- Reproduzir de forma idêntica o funcionamento da função `strcat` (man strcat).

- Ela deverá ser prototipada da seguinte maneira:
```
char *ft_strcat(char *dest, char *src);
```

---
---
Este exercício é importante para o entendimento sobre o núcleo da linguagem C, que são os `ponteiros`. Leve o tempo que for necessário, mas não saia sem realmente compreender.
#### Declaração da função:
    char *ft_strcat(char *dest, char *src) {
        char *pont;

        pont = dest;

        for(; *dest; dest++){
        }
        for(; *src; ){
            *dest++ = *src++;
        }
        *dest = '\0';
        return pont;
    }

Entenda o código:
> - O primeiro ciclo `for` percorre todo o ponteiro, incrementando-o até que este aponte para seu elemento nulo.
> - O segundo ciclo `for` percorre o ponteiro `src` enquanto o conteúdo do ponteiro seja diferente de nulo.

> Reflita sobre a expressão: `*dest++ = *src++;` o que de fato está acontecendo aqui?
O valor ao qual o ponteiro `src` **aponta no momento** é atribuido ao valor ao qual o ponteiro `dest` **aponta no momento**.
E por quê no momento? Porque após a atribuição, nós os incrementamos. Lembre-se de que `y = ++x` é diferente de `y = x++`.

> - A seguir contatenamos ao final de `dest` o elemento nulo. Reflita sobre `* dest = '\0';`, o que de fato está acontecendo.
> - Por fim retornamos `pont`. Porquê retornamos `pont` e não `dest`? Sem executar o código responda, o por que.

#### Compare a declaração anterior de `ft_strcat` com esta:
    char *ft_strcat(char *dest, char *src){
        int contador = 0, comprimento = 0;

        for(comprimento; dest[comprimento]; comprimento++){
        }
        for(contador; src[contador]; contador++){
            dest[comprimento] = src[contador];
            comprimento++;        
        }
        dest[comprimento] = '\0';
        return dest;
    }
Agora responda: Consegue notar a diferença no uso dos ponteiros `dest` e `src` neste exemplo? Agora a função retorna `dest` sem problemas, por que?



A função `printf` não faz parte da solução da questão.

#### Código completo:	
    #include<stdio.h>
    #include<unistd.h>
    char *ft_strcat(char *dest, char *src);

    int main(void){
        char texto[20] = {"hello"};
        char fonte[20] = {" 0world"};
        
        printf("%s", ft_strcat(texto, fonte));

        return 0;
    }

    char *ft_strcat(char *dest, char *src) {
        char *pont;

        pont = dest;

        for(; *dest; dest++){
        }
        for(; *src; ){
            *dest++ = *src++;
        }
        *dest = '\0';
        return pont;
    }


---
---

## Documentação:
> - https://pt.stackoverflow.com/questions/559619/retornando-o-valor-de-um-ponteiro?noredirect=1#comment992499_559619

> - `man strcat`
