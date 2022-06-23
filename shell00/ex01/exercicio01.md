#shell 00 Exercício 01

- Crie o arquivo `testShell00` em sua pasta de entrega.
- Você deve garantir que:
```%> ls -l
total XX
-r--r-xr-x 1 XX XX 40 Jun 1 23:42 testShell00
%>
```
Em relação às horas, será tolerado que o ano seja exibido se a data do exercício (1º de junho) for de seis meses antes ou mais antiga.

- Após resolver o exercício, execute o comando `tar -cf testShell00.tar testShell00`
para criar o arquivo que será entregue.

---
---

#### Criar o arquivo:
    touch testShell00

#### Note que o arquivo deve ter 40 bits.
    echo -n "1234567890123456789012345678901234567890" > testShell00
> Por padrão o comando `echo` adiciona uma quebra de linha "\n" ao arquivo, o que contará como +1bit. Adicionamos o parâmetro `-n` para suprimir a quebra de linha.

#### Note a data e hora da última alteração do arquivo:
    touch -c -t 06012342 testShell00

#### Use o comando `chmod` para alterar as permissões do arquivo:
    chmod 455 testShell00

>
Cada dígito após o comando chmod é uma combinação que representa os direitos de acesso como um número de três dígitos.

Usando os direitos que precisamos:

- 4 (r) Ler

- 2 (w) Escrever

- 1 (x) Executar

Podemos combiná-los. Por exemplo:

4 + 2 + 1 = 7 ( 7 - tudo é permitido. ler e escrever e executar um arquivo)

4 + 2 = 6 (só pode ler e escrever, mas não executar)

4 + 1 = 5 (só pode ler e executar, mas não escrever)

1 + 2 = 6 (apenas executa e escreve, mas não lê)


As permissões seguem a seguinte ordem: Usuário, Grupo e Outro. Por exemplo o comando `chmod 744 arquivo.txt` dá todas as permissões ao usuário, o grupo e outros podem apenas ler o arquivo.

Em uma forma tão simplificada, os conjuntos de permissões para arquivos geralmente são lidos e alterados.

#### Comprimir o arquivo:
    tar -cf testShell00.tar testShell00

---
---

## Documentação:
>man chmod

https://www.computerhope.com/unix/uchmod.htm

https://www.howtogeek.com/248780/how-to-compress-and-extract-files-using-the-tar-command-on-linux/