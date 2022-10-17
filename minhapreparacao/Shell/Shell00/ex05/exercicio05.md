# shell 00 Exercício 05

- Crie um programa shell que retorne os id dos 5 últimos commit do seu repositório
git.
```
%> bash git_commit.sh | cat -e
baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
2f52d74b1387fa80eea844969e8dc5483b531ac1$
905f53d98656771334f53f59bb984fc29774701f$
5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
e94d0b448c03ec633f16d84d63beaef9ae7e7be8$
%>
```
O seu programa será testado no nosso ambiente.

---
---

#### Criar o arquivo:
    touch git_commit.sh
#### Adicionar ao conteúdo do arquivo:
    #!/bin/sh
    git log --format:"%H" -n5
---
---
## Documentação:

https://git-scm.com/docs/git-log
