# shell 01 Exercício 02

- Escreva uma linha de comando que procure na pasta atual e em todas as subpastas todos os arquivos cujos nomes terminam com ".sh"(sem as aspas) e quue só exiba os seus nomes, sem o .sh.

- Exemplo de saída:
```
$>./find_sh.sh | cat -e
find_sh$
file1$
file2$
file3$
$>
```
---
---
> O comando `cat` pode ser substituido por qualquer um outro comando com a mesma finalidade.

## Criar o arquivo.
    touch find_sh.sh
## Adicionar ao conteúdo do arquivo.
    cat > find_sh.sh
    #!/bin/bash
    find . -type f '*.sh' -exec basename {} .sh \;

> Use o comando `bash` para executar o arquivo.
```
bash find_sh.sh
```
## Ou este:
    #!/bin/sh
    find . -name "*.sh" | rev | cut -c4- | cut -d '/' -f1 | rev
## Ou este:
    #!/bin/sh
    find . -type f -name '*.sh' -exec basename {} \; | sed 's/.sh$//'
## Ou este:
    #!/bin/sh
    find . -name '*.sh' | sed 's#.*/##' | sed 's#\.sh##'
## Ou este:
    #!/bin/sh
    find . \( -name '*.sh' \) -print | sed 's/\(.*\)\///g' | sed 's/\.sh//g'
---
---

## Documentação:
> man basename

> man basename

https://linuxhint.com/basename-command-linux/




