# shell 01  Exercício 06

- Escreve uma lina de comando que exiba um ls -l uma linha a cada duas (linha sim, linha não), a partir da primeira.

---
---
> NR: O comando NR mantém uma contagem atual do número de registros de entrada. Lembre-se de que os registros geralmente são linhas. O comando awk executa as instruções de padrão/ação uma vez para cada registro em um arquivo. 
#### Criar o arquivo:
    touch skip.sh
#### Adicionar ao conteúdo do arquivo:
    #!/bin/bash
    ls -l | awk 'NR%2==1'
#### Ou este:
    #!/bin/sh
    ls -l | sed 'n; d'
#### Ou este:
    #!/bin/sh
    ls -l | sed '2!n;d'
---
---
> man awk

https://www.geeksforgeeks.org/awk-command-unixlinux-examples/