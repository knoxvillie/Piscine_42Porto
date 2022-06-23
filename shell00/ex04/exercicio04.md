#shell 00 Exercício 04
- Coloque em um arquivo midLS a linha de comando a se digitar para listar os arquivos
e as pastas da pasta atual, mas não os arquivos ocultos, nem "."ou ".."(nada que
comece com um ponto). Separe-os por vírgulas, ordene por data de criação e de
maneira que as pastas sejam seguidas por uma barra.

---
---

#### Criar o arquivo:
    touch midLS
#### Adicionar ao conteúdo do arquivo:
    cat > midLS
    ls -mpr
> Use `-r` ou não para alterar a ordem dos mais antigos primeiro ou por último.

---
---

## Documentação:
> man ls