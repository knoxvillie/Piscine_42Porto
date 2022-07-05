# C 00 Exercício 04
---
- Escreva uma função que mostre 'N' ou 'P' segundo o sinal do inteiro passando como parâmetro. Se n for negtivo, indique 'N'. Se n for positivo ou nulo, indique 'P'.

- Ela deve ser prototipada da seguinte maneira:
```
void ft_is_negative(int n);
```

---

> Repare que o resultado só tem duas possibilidades, ou positivo ou negativo, portanto devemos usar 0 como verificador. Certifique-se de incluir o caso em que `n` = 0.

#### Declarando a função `void ft_is_negative()`:

    void ft_is_negative(int n){
        char resultado;

        if (n >= 0){
            resultado = 'P';
        }
        else{ 
            resultado = 'N';
        }
        write(1, &resultado, 1);

    };

#### Função `main()`:

    int main() {
        ft_is_negative(10);
        return 0
        }

#### Programa completo:
    #include <unistd.h>

    void ft_is_negative(int n);

    void ft_is_negative(int n){
        char resultado;

        if (n >= 0){
            resultado = 'P';
        }
        else{ 
            resultado = 'N';
        }
        write(1, &resultado, 1);

    }

    int main(void){
        ft_is_negative(10);
        return 0;
    }
---
---

## Documentação:

> Livro C Completo Total
