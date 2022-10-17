# shell 01 Exercício 05

- Crie um arquivo contendo somente "42"e **NADA** mais.

- Ele deve ser nomeado:
```
"\?$*'MaRViN'*$?\"
```
-Exemplo:
```
$>ls -lRa *MaRV* | cat -e
-rw---xr-- 1 75355 32015 2 Oct 2 12:21 "\?$*'MaRViN'*$?\"$
$>
```
---
---

## Explanation
1.  Double your \\, like this: \\\\, so that your shell does not interpret the backslashes from your filename as escape characters.

2. Escape " and ', like this: \\", \\', so that your shell interprets the double quotes as part of the filename.
3. Escape \$, like this: \\$, otherwise your shell will think you're using a variable.
4. Escape ? and *, like this: \\?, \\*, to prevent filename expansion.

#### Criando o arquivo:

```
touch \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
```

#### Adicionando o conteúdo do arquivo:
    cat > \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
    42

#### Ou este: Criamos um arquivo através do comando `echo` e redireciinamos o fluxo de saída para o arquivo.
    echo -e "42" > '"\?$*'MaRViN'*$?\"'

---
---
## Documentação:

>man echo

https://www.tecmint.com/manage-linux-filenames-with-special-characters/

https://linuxhint.com/bash_echo/