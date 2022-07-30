# shell 01 Exercício 03

- Escreva uma linha de comando que mostre o número de arquivos regulares e de
pastas dentro da pasta atual e todas as suas subpastas, incluindo o "."da pasta
inicial.

- Exemplo de saída:
```
$>./count_files.sh | cat -e
42$
$>
```
---
---

#### Criar o arquivo:
    touch count_files.sh
> O comando `cat` pode ser subistituido por qualquer outro comando com o mesmo propósito.

#### Adicionar ao conteúdo do arquivo:
    cat > count_files.sh
    #!/bin/sh
    find . | wc -l | sed 's/ //g'

#### Ou este:
    #!/bin/sh
    find . -type f -o -type d | wc -l | sed 's# * ##'
#### Ou este:
    #!/bin/sh
    find . \( -type f -o -type d \) | wc -l | tr -d ' '
#### Ou este:
    #!/bin/sh
    ( find . -type d && find . -type f ) | wc -l | sed 's/ //g'
---
---
## Documentação:
> man sed

> man wc

https://devconnected.com/how-to-count-files-in-directory-on-linux/

https://www.geeksforgeeks.org/sed-command-in-linux-unix-with-examples/
