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

## Atividades

### Atividade 01

Faça um script que peça dois números ao usuário e exiba um menu de escolha, onde 1 - Soma, 2 - Subtração, 3 - Multiplicação e 4 - Divisão.

De acordo a escolha do usuário, o script deverá realizar o cálculo desejado.

entregar em <https://moodle.poa.ifrs.edu.br/mod/forum/view.php?id=483061>

```bash
#!/bin/bash
read -p "Digite o primeiro número: " num1
read -p "Digite o segundo número: " num2

echo "Escolha a operação:"
echo "1 - soma"
echo "2 - subtração"
echo "3 - multiplicação"
echo "4 - divisão"

read -p "Opção: " opcao

case $opcao in
  1)
    resultado=$((num1 + num2))
    echo "A soma é: $resultado"
    ;;
  2)
    resultado=$((num1 - num2))
    echo "A subtração é: $resultado"
    ;;
  3)
    resultado=$((num1 * num2))
    echo "A multiplicação é $resultado"
    ;;
  4)
  if [ $num2 -ne 0 ]; then
    resultado=$(echo "scale=2; $num1 / $num2" | bc)
    echo "A divisão é $resultado"
  else
   echo "Erro: divisão por zero não permitida."
   fi
   ;;
  *)
    echo "Opção inválida!"
    ;;
esac
```

### Atividade 02

Faça um script que peça ao usuário um nome de arquivo e crie esse arquivo no diretório atual.

Para criar o arquivo pesquise o comando "touch".

```bash
#!/bin/bash

echo -e "Insira o nome do arquivo a ser criado\nEx.: <nome>.<extensão>"
read arquivo
touch "$arquivo"
```

entrega em <https://moodle.poa.ifrs.edu.br/mod/forum/view.php?id=483062>

### Atividade 03

Faça um script que solicite um número ao usuário e exiba a tabuada desse número de 1 a 10.

```bash
#!/bin/bash

read -p "Digite o número cuja tabuada você deseja: " numero

for (( i=1; i<=10; i++ ))
do
  echo "$i x $numero = $((i * numero))"
done
```

entrega em <https://moodle.poa.ifrs.edu.br/mod/forum/view.php?id=483063>

### Atividade 04

Faça um script que mostre um menu e de acordo a escolha do usuário, mostre as informação. :
1- Nome do Host
2- Tempo de Atividade do Host
3- O numero de Nucleos do Processador
4- O Grupo do Usuário atual
5- A Versão do Kernel Linux
6- A Arquitetura do Sistema Linux

```bash
#!/bin/bash
echo "Escolha a informação que deseja:"
echo "1 - Nome do Host"
echo "2 - Tempo de Atividade do Hos"
echo "3 - O numero de Nucleos do Processador"
echo "4 - O Grupo do Usuário atual"
echo "5 - A Versão do Kernel Linux"
echo "6 - A Arquitetura do Sistema Linux"

read -p "Opção: " opcao

case $opcao in
  1)
    echo "Nome do Host: $(hostname)"
    ;;
  2)
    echo "Tempo de Atividade: $(uptime -p)"
    ;;
  3)
    echo "Núcleos do Processador: $(nproc)"
    ;;
  4)
    echo "Grupo do Usuário Atual: $(id -gn)"
    ;;
  5)
    echo "Versão do Kernel: $(uname -r)"
    ;;
  6)
    echo "Arquitetura do Sistema: $(uname -m)"
    ;;
  *)
    echo "Opção inválida!"
    ;;
esac
```

entrega em <https://moodle.poa.ifrs.edu.br/mod/forum/view.php?id=483064>
