# shell 01 Exercício 07

- Escreva uma lina de comando que exiba a saída de um `cat /etc/passwd`, retirando os comentários, uma linha a cada duas começando pela segunda, invertendo cada login e ordenando em ordem alfabética inversa, mantando apenas os logins compreendidos entre **FT_LINE1** e **FT_LINE2** inclusos, separados por ", "(sem aspas), e terminando com ".".

- Exemplo: Entre as linhas 7 e 15, o resultado será algo como:
``` 
$> ./r_dwssap.sh
sstq_, sorebrek_brk_, soibten_, sergtsop_, scodved_, rlaxcm_, rgmecived_, revreswodniw_, revressta_
.$>
```
> Respeite estritamente a ordem do enunciado.

---
---

#### Criar o arquivo:
    touch r_dwssap.sh
#### Adicionar ao conteúdo do arquivo:
    #!/bin/sh
    cat /etc/passwd | cut -d':' -f 1 | sed -n 'n;p' | rev | sort -r | tr -s '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'

> `cat /etc/passwd` : Ler o conteúdo do diretório.

> `cut -d ':' -f 1` : Configuro o delimitador de campo como ":", salvo apenas o campo 1 (usuário) e descarto o restante da linha. 

> `sed -n 'n;p'` : Retorna apenas a linhas de ídice ímpar. Atenção ao primeiro índice de linha usado pelo comando `sed`

> `rev` : Reverte os caracteres de cada linha.

> `sort -r` Ordena as linhas em ordem inversa.

> `tr -s '\n' ','` : Substitui as quebras de linha de cada linha por ",". Concatenando todas as linhas numa só e as separando por ",".

> `sed 's/,/, /g'` : Substitui "," por ", ".

> `sed 's/, $/./'` : Substitui " ," por "." apenas na última ocorrência do padrão " ,". Ou seja no final da linha.

#### A saída deve ser algo assim:
    yxorp, ydobon, tpa_, sys, swen, subegassem, semag, pukcab, pl, nomead, evloser-dmetsys, etanillop, dhss, ddiuu, cri.%

#### Para referênciar os parâmetros (compreendidos entre **FT_LINE1** e **FT_LINE2** inclusos) basta adicionar ao comando:
    #!/bin/sh
    cat /etc/passwd | cut -d':' -f 1 | sed -n 'n;p' | rev | sort -r | sed -n "$FT_LINE1 $FT_LINE2 p" | tr -s '\n' ',' | sed 's/,/, /g' |  sed 's/, $/./'   
### A saída deve ser algo assim:
    yxorp, ydobon, tpa_, sys, swen, subegassem, semag, pukcab, pl, nomead, evloser-dmetsys, etanillop, dhss, ddiuu, cri.%
> No meu caso, os resultados são iguais, com ou sem a referência ao FT_LINE. (Não sei o motivo.) Você sabe? manda um git push.

#### Este também é uma solução:
    #!/bin/sh
    cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | sed 's/:\(.*\)//g' | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"]; NR <= ENVIRON["FT_LINE2"]' | tr '\n' ' ' | sed 's/ /, /g' | sed 's/\(.*\), /\1./' | tr -d '\n'
#### Este também é uma solução:
    #!/bin/sh
    cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | sed 's/:\(.*\)//g' | rev | sort -r |  tr '\n' ' ' | sed 's/ /, /g' | sed 's/\(.*\), /\1./' | tr -d '\n'
#### Este também é uma solução:
    #!/bin/sh
    cat /etc/passwd | sed -n "$FT_LINE1 $FT_LINE2 p" | sed -e 's/#.*//' -e 's/[ ^I]*$//' -e '/^$/ d' -e 's/:.*//g' | tr '\n' ',' | rev | tr "," "\n" | sort -r | tr "\n" "," | sed -e 's/, */, /g' -e 's/.$//' -e 's/.\{3\}$//' 's/$/./'
---------
---------
## Documentação:
>man sed

>man tr

>man cut

>man sort

https://geek-university.com/sort-lines-of-a-text-file/

https://stackoverflow.com/questions/36689275/bash-split-line-into-multiple-lines

https://unix.stackexchange.com/questions/26723/print-odd-numbered-lines-print-even-numbered-lines

https://stackoverflow.com/questions/21309020/remove-odd-or-even-lines-from-a-text-file

https://askubuntu.com/questions/988646/how-can-i-print-multiline-output-on-the-same-line

https://stackoverflow.com/questions/48743723/how-to-replace-the-last-char-of-a-string-in-bash-with-another-char
