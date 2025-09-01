# Aula 05 - Comunicação entre processos, Condição de corrida, regiões críticas, exclusão, mútua, semáforos, mutexes

## More Commands

## File Management

- ./`<nome do arquivo>` - executa processo em primeiro plano
  - & ao final do comando - executa o processo em segundo plano
- exit - encerra a seção e mantém os processos em segundo plano executando
- `ctrl + z` - passa a tarefa para segundo plano, porém parada - útil para para paras um processo que esteja utilizando muitos recursos
- jobs - lista os processos em segundo plano
- fg `<index da tarefa>` - traz um processo para primeiro plano
- bg `<index da tarefa>` traz um processo para segundo plano e o deixa rodando
- cp `<origem>` `<destino>`: copia arquivos/diretórios
- tail `<nome do arquivo>` - mostra as 10 últimas linhas do arquivo
  - -f mantém o arquivo aberto
- head mostra o início do arquivo
- alias - mostra os apelidos disponíveis
- env - mostra as variáveis de ambiente
- echo $`<nome da varável>`
- cat `<nome>.<extenção>` | sort | uniq > `<novo_nome>.<extensão>`
  - sort - ordena
  - uniq - remove duplicatas
  - wc - word count
  - > produz uma saída em um arquivo
- file `<nome>.<extenção>` - descreve o tipo do arquivo

## Shell Script

### sintax

- > escreve / sobrescreve
- > acrescnnta / contatena

> O que é um programa / o que é uma tarefa

programas são estáticos, tarefas têm estados
tarefas são executados por processos (via fork) ou threads

a thread compartilha variáveis, os processos não
Processos podem ser intependentes ou cooperativos

## Atividades

### Atividade 1

No servidor aula.inf.poa.ifrs.edu.br:

1. Fazer um Shell Script que gere um arquivo com todos valores pares, de 1 até 3.000.000.

2. Fazer outro Shell Script que gere um arquivo com todos valores ímpares, de 1 até 3.000.000.

3. Colocar os dois script para rodar, um em cada Terminal.

4. Apresentar (print screen) os scripts em execução.

#### Pares

```bash
#!/bin/bash

for ((i=2; i<=3000000; i+=2))
do
  echo "$i" >> geraPares.txt
done
```

#### Ímpares

```bash
#!/bin/bash

for ((i=1; i<=3000000; i+=2))
do
  echo "$i" >> geraImpares.txt
done
```
