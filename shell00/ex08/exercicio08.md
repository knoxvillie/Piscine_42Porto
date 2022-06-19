# shell 00 Exercício 08

- #### Coloque dentro de um arquivo clean uma linha de comando que vai procurar, apartir da pasta atual e dentro de todas as suas subpastas, os arquivos cujos nomesterminam com ~, ou comecem e terminem com #. 
- #### A linha de comando deve exibir e excluir os arquivos encontrados.
- #### Somente um comando é autorizado: nada de ’;’ ou ’&&’ ou outro comando.
> #### man find

---
---
#### 1) Criar o arquivo.
    touch clean

#### 2) Adicionar esta linha de código no arquivo `clean`.
    find . \( -name "*~" -o -name "*~." -o -name "#*#" -o -name "#*#." \) -print -delete
> #### Outra possibilidade:
    find . -name "*~" -print -delete -or -name "*~." -print -delete -or -name "#*#" -print -delete -or -name "#*#." -print -delete 
Note: O comando procura, exibi e deleta todas pastas e arquivos com ou sem extensão.

---
---
## Documentação:
man find

https://www.diskinternals.com/linux-reader/bash-find-command/

