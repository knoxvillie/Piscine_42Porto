# C 0 Exercício 00
---

- Escreva uma função que mostre o caractere passado como parâmetro.
- Ela deve ser prototipada da seguinte maneira:
```
void ft_putchar(char c);
```
Para indicar o caractere, você deve usar a função `write` da seguinte maneira.
```
write(1, &c, 1)
```

---
---

#### Protótipos de funções:
"Definição expandida ou protótipo de função permite quue C forneça uma verificação mais forte de tipos, assim C pode encontrar e apresentar quaisquer conversões de tipos ilegais entre o argumento usado para chamar a uma função e a definição de seus parâmetros."

> Forma geral de uma definição de protótipo de função:
```
 Tipo Nome_func(Tipo Var_1, Tipo Var_2, ..., Var_n);
```

#### Declaramos a função escrevendo um protótipo:
    void ft_putchar(char c);
> Repare que a função ft_putchar não retorna nenhum valor portanto atribuimos tipo `void`.

#### Função `write`:
> Arquivos de inclusão obrigatórios `#include <unistd.h>`

Em resumo a função `write` tem basicamamente 3 parãmetros: O primeiro é um descritor de arquivo de onde gravar a saída, usamos `1` para saída padrão. Segundo parâmetro ponteiro que contém o endereço da variável a ser exibida. Terceiro parâmetro número de bytes gravados.

    write(par_1, &par_2, par_3);

#### A função ft_putchar ficará assim:
    void ft_putchar(char c){
        write(1, &c, 1);
    }

#### Contrução do função main():

    int main(void){

    ft_putchar('k');
    return 0;

    }

#### Programa completo: 
    #include <unistd.h>

    void ft_putchar(char c);

    void ft_putchar(char c){
        write(1, &c, 1);
    }

    int main(void){
        ft_putchar('k');
        return 0;
    }

---
---
## Documentação:

http://codewiki.wikidot.com/c:system-calls:write

>Livro C Completo Total

