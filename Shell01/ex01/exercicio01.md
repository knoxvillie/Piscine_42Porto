# shell 01 Exercício 01

- Escreva uma linha de comando que determine e mostre a lista de grupos dos quais o login especificado da variável de ambiente FT_USER é membro, separando-os por vírgula sem espaços.

- Exemplos:
    * com FT_USER=nours, o resultado é "god,root,admin,master,nours,bocal"(sem aspas)
```
$>./print_groups.sh
god,root,admin,master,nours,bocal$>
```
- com FT_USER=daemon, o resultado é "daemon,bin"(sem aspas)
```
$>./print_groups.sh
daemon,bin$>
```
> man groups

---
---

#### Criar o arquivo.
    touch print_groups.sh

> O comando `cat` pode ser trocado por qualquer um outro comando com a mesma finalidade

#### Adicionar o conteúdo do arquivo com o comando `cat`.
    cat > print_groups.sh
    #!/bin/sh
    groups $FT_USER | tr -s ' ' ',' | awk '{print $0}'

#### Ou este:
    #!/bin/sh
    groups $FT_USER | tr ' ' ',' | tr -d '\n'
#### Ou este:
    #!/bin/sh
    groups $FT_USER | sed 's/ /,/g' | tr -d '\n'

---
---

## Documentação:
>man groups

>man awk

>man tr

https://linuxhint.com/list-all-groups-linux/

https://www.cyberciti.biz/faq/bash-scripting-using-awk/

