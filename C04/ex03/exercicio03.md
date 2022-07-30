# C 04 Exercício 03

---

- Escreva uma função que converta o início da cadeia apontada por `str` em inteiro do tipo `int`.

- `str` pode começar por um número arbitrário de 'whwite space' (como definido por isspace(3))

- `str` pode então ser seguido por um número arbitrário de sinais + e sinais -. O sinal - vai mudar o sinal do inteiro retornando em função do número de sinais - e se este for par ou ímpar.

- Por fim, `str` deverá ser composta por número da base 10

- Sua função deverá ler `str` desde que esta siga as regras acima e ela deve retornar o número encontrado até então.

- Você não deve considerar os overflows e underflows, o resultado é considerado indefinido nesses casos.

- Você pode comprar sua função com a verdadeira função `atoi`, exceto a parte dos sinais bem como do overflow.

- Veja um exemplo de um programa que mostra o valor de retorno de `atoi`:
```
$>./a.out "  ---+--+1234ab567"
-1234
$>
```

- Ela de ser prototipada da seguinte maneira:
```
int ft_atoi(char *str);
```

---
---

#### Declaração da função:
    int ft_atoi(char *str){
        int sinal = 1, numero = 0;
        
        for(; *str == 32 || *str >= 9 && *str <= 13; str++){} /* Espaços vazios */
        for(; *str == 43 || *str == 45; *str++){ /* Sinais */
            if(*str == 45){
                sinal *= -1;
            }
        }
        for(; *str >= 48 && *str <= 57; str++){ 
            numero = (numero * 10) + *str - 48;
        }

        for(; *str; str++){} /* Overflow */
        *str = '\0';

        return (numero*sinal);
    }

Entenda o código:
- A idéia deste resolução é o incremento do ponteiro `str` passando pelo underflows da string até overflows, realizando uma operação inteira com os chars com valor da tabela ASCII maior ou igual a 48, menor ou igual a 57. Lembre-se da promoção automático de tipo.
- É importante lembrar que em C, isso pode ser conferido na descrição da função `isspace(3)`, que é a lista completa de espaço em branco é:
    
    - ‘ ’ Space character.
    - \f Form feed.
    - \n New-line.
    - \r Carriage return.
    - \t Horizontal tab.
    - \v And vertical tab.

- O segundo ciclo `for` percorre e verifica se o sinal é negativo, se for `sinal *= -1`. Isso garante que quantidades pares de `-` resultem em um `numero` maior que zero, ou `numero` menor que 0 se `-` aparecer ímpares vezes.

- A função retorna `numero*sinal` se houver a string contiver caracteres numéricos entro o under e ouverflows. Retorna 0 se não contiver.

A função `printf` não faz parte da solução da questão.

#### Código completo:
    #include<stdio.h>

    int ft_atoi(char *str);

    int main(void){
        char str[] = "   ---+--+1234ab567";

        printf("%s, %d", str, ft_atoi(str));

        return 0;
    }

    int ft_atoi(char *str){
        int sinal = 1, numero = 0;
        
        for(; *str == 32 || *str >= 9 && *str <= 13; str++){} /* Espaços vazios */
        for(; *str == 43 || *str == 45; *str++){ /* Sinais */
            if(*str == 45){
                sinal *= -1;
            }
        }
        for(; *str >= 48 && *str <= 57; str++){ 
            numero = (numero * 10) + *str - 48;
        }

        for(; *str; str++){} /* Overflow */
        *str = '\0';

        return (numero*sinal);
    }

---
---

## Documentação:

> man atoi

> https://www.tutorialspoint.com/c_standard_library/c_function_atoi.htm

> https://man.openbsd.org/isspace.3

> https://web.itu.edu.tr/~sgunduz/courses/mikroisl/ascii.html
