# shell 00 Exercício 06

- Escreva um shell script curto que retornará a lista de arquivos existentes ignorados pelo seu repositório git atualmente presentes no seu repositório local. Exemplo:
```
%> bash git_ignore.sh | cat -e
.DS_Store$
mywork.c~$
%>
```
O seu programa será testado no nosso ambiente.

---
---
#### Criar o arquivo:
     touch git_ignore.sh
#### Criar o arquivo .gitignore
    touch .gitignore
#### Dentro do arquivo `.gitignore` adicione a lista de arquivos a serem ignorados.
    cat > .gitignore
    .DS_Store
    mywork.c~
#### Adicione ao conteúdo do arquivo `git_ignore.sh`:
    #!/bin/sh
    git ls-files --exclude-standard --others --ignore
#### Ou este:
    #!/bin/sh
    git ls-files --exclude-standard --others -i
----

----

## Documentação:
https://stackoverflow.com/questions/466764/git-command-to-show-which-specific-files-are-ignored-by-gitignore

https://git-scm.com/docs/gitignore