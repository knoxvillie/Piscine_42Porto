# C 01 Exercício 05
---
 - Escreva uma função que mostre um a um os caracteres de uma string na tela.

 - O endereço do primeiro caractere da string está contido no ponteiro passado como parêmetro para a função.

 - Ela deverá ser prototipada da seguinte maneira:
 ```
 void ft_putstr(char *str);
 ```

 ---
 ---

 #### Declaração da função:
    void ft_putstr(char *str){
        while (*str != '\0'){
            write(1, str, 1);
            str++;
        }
    }

> Repare que toda matriz de caracteres nome_mat[tamanho] que represente uma string, tem de fato `[tamanho + 1]` já que toda string termina com `'\0'` em `C`.
Sempre que passamos como parâmetro de uma função um ponteiro com sua dimesão vazia ou sem o campo de dimensões, na verdade o que estamos passando é um ponteiro que aponta para o primeiro elemento da matriz. Desta forma podemos iterar sobre a string.

#### Código completo:
> A função não `write` não é admitida na solução do problema. Usarei por questões didáticas apenas.

    #include<unistd.h>

    void ft_putstr(char *str);

    void ft_putstr(char *str){
        while (*str != '\0'){
            wirte(1, str, 1);
            str++
        }
    }

    int main(void){
        char texto[] = 'Eu amo programar'

        ft-putstr(texto);
        return 0;
    }

---
---

## Documentação:

> C Completo Total