# shell 00 Exercício 07
---

- #### Criar arquivo `b`. Nos é fornecido um arquivo `a` e o arquivo `sw.diff`, que armazena informações sobre novas alterações.

#### O conteúdo do arquivo a, quando visualizado através do comando `cat` com o sinalizador `-e`, ficará assim:

```
%>cat -e a
STARWARS$
Episode IV, A NEW HOPE It is a period of civil war.$
$
Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire.$
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the DEATH STAR,$
an armored space station with enough power to destroy an entire planet.$
$
Pursued by the Empire's sinister agents, Princess Leia races home aboard her starship, custodian of the stolen plans that can save her people and restore freedom to the galaxy...$
$
```
---
---

#### 1) Usando o comando `patch`. O comando `patch` pegará o arquivo `sw.diff` com a descrição das novas alterações e combinará essas alterações com o texto do arquivo `a`, e criará um arquivo `b` baseado neles, que armazena a versão restaurada do texto com as novas alterações.:

    patch a  -o b < sw.diff

#### Caso preetenda desfazer as alterações no arquivo `a`, digite no terminal:

    patch a -R < sw.diff

#### O conteúdo do arquivo `b` (com a versão restaurada do texto com novas alterações) quando visualizado através do programa `cat` com o sinalizador `-e` ficará assim:

```
%>cat -e b
Episode V, A NEW H0PE It is a period of civil war$
Rebel spaceships, striking from a hidden base, have won their first victory against the evil Galactic Empire. $
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the STAR DEATH, an armored space station with enough power to destroy an entire planet.$
$
$
Pursued by the Empire's sinister agents,$
Princess Mehdi races home aboard her starship, custodian of the stolen plans that can save her people and restore the dictatorship to the galaxie..$
$
$
$
$
```

#### 3) Vamos verificar. Comparando o arquivo com as alterações `sw.diff` recebidas na tarefa e o arquivo `sw.diff2`, que obteremos comparando os arquivos `a` e o arquivo `b` com a nova versão do texto criada pelo comando `patch`. Se, ao comparar os arquivos `sw.diff` e `sw.diff2`, a saída do programa estiver vazia, então os arquivos são idênticos e a restauração da nova versão do texto, utilizando as alterações salvas no arquivo ` sw.diff` e a versão antiga do texto do arquivo `a`, passado com sucesso:

    diff a b > sw.diff2

    diff sw.diff sw.diff2



---
---


## Documentação

`man diff`
https://www.geeksforgeeks.org/diff-command-linux-examples/


`man patch`
https://linuxhint.com/run-patch-command-in-linux/# 