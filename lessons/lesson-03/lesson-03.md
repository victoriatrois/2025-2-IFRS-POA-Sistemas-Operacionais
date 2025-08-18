# Aula 03 - Processos x Threads

Para ocultar um arquivo, basta nomeá-lo iniciando com ponto(.)
VIM - é um editor de texto muito poderoso, mas que precisa de um pouco de twiks
nano é um mais amigável

para criármos um arquivo com o nano rodamos:
nano `<nome do arquivo>`.`<extenção do arquivo>`

```
c
#inclue "stdio.h"

  int main() {
  printf("Olá mundo");

  return 0;
}
```

cat `<nome do arquivo>`.`<extenção do arquivo>` abre o arquivo em modo de leitura
tac `<nome do arquivo>`.`<extenção do arquivo>` abre o arquivo ao contrário em modo de leitura (útil para ver logs)

| grep `<busca>` - usado com alguns comandos, como o ls -la, executando uma busca

sudo apt install gcc
gcc `<nome do arquivo>`.`<extensão do arquivo>` -o `<nome do programa executável>`

mv `<nome atual>` `<novo nome>` renomear arquivo

no linux não existe extenção, o que diferencia um arquivo executável é a permissão de execução um x ao fim da lista de permisões

## Mono tarefas

### O problema a se resolver

num sistema computacional temos mais tarefas sendo executados do que o número de proessadores

### Solução

Cada tarefa recebe uma quantidade de processamento que seja suficiente para a tarefa que ela precisa executar.

#### Estados das tarefas - Monotarefas

nova - executando - terminada

### Novo problema

CPU muito mais rápida que disp de E/S
CPU ficava esperando a execução da E/S

### Nova solução

Preempsão - suspender a execução da tarefa que não está pronta para ser executada para executar uma que está pronta.

#### Estados das tarefas - Multi-tarefas

nova - pronta - executando - terminada
| | - suspensa -

### Mais um problema

Programas que entram em laço infinito ficam \_ recursos indefinidamente.

### Mais uma solução

Prazo de tempo para execução - Sistemas de Tempo Compartilhado

#### Estados das tarefas - Sistema de Tempo Compartilhado

           - - - - -
          ↓          |

nova - pronta - executando - terminada
| | - suspensa -

No Linux as operações de troca de contexto para a plataforma Intel
x86 estão definidas através de diretivas em Assembly no arquivo
arch/i386/kernel/process.c dos fontes do núcleo.

## Processos

Processos são programas que devem ser executados de forma isolada.

### Tread

Uma main que executa duas funções simultâneamente
Caminhos de execução, executtos concorrentemente na memória compartilhada do proceso pai.

#### Quando usar

- Salvar arquivos em disco
- Interface gráfica pesada
- Comunicações pela internet
- Cálculos pesados

#### Porque usar

- São mais fáceis de implementar.
- Sobreposição de tarefas na mesma aplicação.

### Fork

Maneira utilizada para "criar" um novo processo.
Na verdade o processo é duplicado

## Threads in other programming Languages

JavaScript does not have traditional threads like C, Java, or Python.

In Node.js: You can use the Worker Threads module (worker_threads) to run JavaScript in parallel threads, also with message passing.
