# shel 01 Exercício 04

- Escreva uma linha de comando que mostre os endereços MAC de sua máquina. Cada endereço deve ser seguido de uma quebra de linha.
> man ifconfig

---
---
> Em caso de "ifconfig: command not found" seguir o tutorial: https://www.makeuseof.com/fix-ifconfig-command-not-found-error-linux/

#### Criar o arquivo.
    touch MAC.sh
#### Adicionar ao conteúdo do arquivo.
    #!/bin/sh
    ifconfig | grep "ether" | sed "s/ether //" | cut -c 9- | cut -d " " -f 1

#### Ou este:
    #!/bin/sh
    ifconfig | grep "ether" | sed 's/\(.*\)ether //g' | cut -b 1-17
#### Ou este:
    #!/bin/sh
    ifconfig | grep "ether" | sed "s/ether //" | cut -c 2- | tr -d ' ' | cut -b 1-17
#### Ou este:
    #!/bin/sh
    ifconfig | grep -o -E '([[:xdigit:]]{2}:){5}[[:xdigit:]]{1,2}'

---
---
## Documentação:
>man ifconfig

>man grep

>man cut

https://www.cyberciti.biz/faq/howto-use-grep-command-in-linux-unix/

https://phoenixnap.com/kb/linux-cut

https://www.geeksforgeeks.org/cut-command-linux-examples/