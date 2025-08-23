# Aula 04 - Processos x Threads

## Forks

Específico da arquitetura linux, não roda de forma nativ no windows.

## Criando um shell script

O shell é um interpretador de comando - bash é o mais popular
Um shell script é um pequeno programa executável que é utilizado pra automatizar as mais diversas tarefas.

who | wc -l - conta (wc) quantas linhas(-l) retornam de usuários onectados (who)

```bash
#!/bin/bash
contador=1
while [ $contador -ne 50 ]; # ne = not equal
do
  echo "Contando... Linha número $contador"
  sleep 1;
  ((contador=$contador+1))
done
```

copiando no prompt com mouse: selecione o que quer copiar

ls -la | grep meuprimeiroshellscript.sh
-rw-r--r-- 1 82185581015 domain users 159 Aug 20 20:20 meuprimeiroshellscript.sh
permissões | número de links do arquivo | usuário dono do arquivo | grupo de permissões | tamanho | data e hora de criação / última modificação | nome do arquivo

### Permissões

representatas por uma sequência de 10 caracteres

#### primeiro caractere

sweet bit - tipo de arquivo - d - directory / - file
dispositivos

#### segundo ao décimo caractere

grupo de usuários

##### do segundo ao quarto

r - read / w - write / x - execute
dono do arquivo

##### do quinto ao sétimo

r - read / w - write / x - execute
grupo de permissões

##### do oitavo ao décimo

r - read / w - write / x - execute
outros

Para executar um script, devemos ativar o bit de execução do arquivo

rm -RF \* - remove Recursively and with Force everything

atrubuições e recogações de permissões podem ser feitas de maneira individual ou octal

rwxrwxrwx - o pior tipo de permissão que um arquivo pode ter (o mais permissivo)

chmod - atribui ou revoga permissões

u+x - atribui ao usuário a permissão de execução
g+x - atribui ao grupo a permissão de execução
o+x - atribui a outros a permissão de execução
a+x / +x - atribui a todos a permissão de execução

um sistema octal usa 3 bits

r w x
4 2 1

os numeros são usados como parametros do comando chmod

chmod 777 `<nome do arquivo>` - um convite a um ataque

## Visualizando processos

82185581015@aula:~$ ps -aux | grep primeiroshell
8218558+ 188750 0.0 0.0 7740 3328 pts/45 S+ 21:21 0:00 /bin/bash ./meuprimeiroshellscript.sh
8218558+ 195213 0.0 0.0 7080 1792 pts/19 S+ 21:25 0:00 grep --color=auto primeiroshell

### encerrando processos

kill -9 `<proccess id>` (-9 é parecido com -f)

### priorizando processos

top - gerenciador de tarefas
htop - tem que ser instalado
apt install htop
