# shell 00 Exercício 02

- • Crie todos estes arquivos e pastas. Faça o que for necessário para que a visualização de um `ls-l` em sua pasta fique da seguinte forma:
```
%> ls -l
total XX
drwx--xr-x 2 XX XX XX Jun 1 20:47 test0
-rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
-r-----r-- 2 XX XX 1 Jun 1 23:44 test3
-rw-r----x 1 XX XX 2 Jun 1 23:43 test4
-r-----r-- 2 XX XX 1 Jun 1 23:44 test5
lrwxr-xr-x 1 XX XX 5 Jun 1 22:20 test6 -> test0
%>
```
Em relação às horas, será tolerado que o ano apareça se a data do exercício (1º de junho) for de seis meses antes ou mais antiga.

- Após resolver o exercício, execute o comando `tar -cf exo2.tar ` * para criar o
arquivo que será entregue.
---
---

#### Criar os arquivos:
    touch test1 test3 test4
### Ou este:
    touch test{1,3,4}
> Repare que o arquivo `test5` é uma referência (**HARD LINK**) ao arquivo `test3` (São iguais em conteúdo, permissões e datas de alteração)
#### Criar link entre `test5` ao `test3`:
    ln test3 test5
#### Criar as pastas:
    mkdir test0 test2
#### Criar o Symbolic link (atalho):
    ln -s test0 test6

#### Definir o volume dos arquivos:
    echo -n "1234" > test1
    echo -n "1" > test3
    echo -n "12" > test4
> o symbolic link `test6` tem volume padrão.

#### Definir a data e hora de alteração dos arquivos e pastas:
    touch -t 06012047 test0
    touch -t 06012146 test1
    touch -t 06012245 test2
    touch -t 06012344 test3
    touch -t 06012343 test4
    touch -t 06012220 test6

#### Definir permissões dos arquivos e pastas:
    chmod 715 test0
    chmod 714 test1
    chmod 504 test2
    chmod 404 test3
    chmod 641 test4
    chmod 755 test0

#### Executar o comando `tar -cf exo2.tar *`

---
---

## Documentação:
> man tar

> man chmod

https://www.freecodecamp.org/news/symlink-tutorial-in-linux-how-to-create-and-remove-a-symbolic-link/
