# Aula 08 - Correção da avaliação 01 e Gerenciamento de memória

Acesso a Memória. Conceitos.

## Correção da avaliação 01

## Escalonador de tarefas

Componente do SO que gerencia que tarefas podem ser ececutadas em qual ordem e prioridade.

Esse componente é baseado num algoritimo que define o comportamento do SO.

Ele permite que os SO tratem das tarefas de modo mais eficiente e rápida.

Logo, o escalonador de tarefas e o procedimento de escolha do processo a ser executado.

### Tipos de Tarefas

#### Temporais

##### Tarefas de tempo real

A resposta vem imediatamente

##### Tarefas interativas

Sistemas que recebem eventos externos (do usuário ou de outros sistemas) que devem responder rapidamente, porém não necessáriamente

##### Tarefas em lote (Batch)

Executam sem intervenção do usuário

#### Uso do processador

##### Orientadas a processamento (CPU-bound tasks)

Tarefas que usam intensivamente o processador.

##### Orientadas a entrada e saída (IO-bound tasks)

Tarefas que dependem mais dos dispositivos de entrada e saída do que do processador.

## Métricas de um Algoritmo (parâmetros de um order by)

- Tempo de execução (tempo total de execução entre criação e encerramento de uma tarefa)
- Tempo de espera (tempo perdido no estado pronto)
- Tempo de resposta (entre a entrada e aparecer na tela)
- Justiça (o que utilizou menos o processador)
- Eficiência (estatística calculada a partir do número de instruções que um algoritmo que estima qual algoritmo terminará primeiro)

## Algoritimos de escalonamento

- FIFO (cooperativo [a tarefa só sai do processador quando termina a execução]) - eficiente para batch
- Round-robin (preemptivo [a tarefa sai do processador após ter passado o tempo determinado]) eficiente para tarefas interativas
- Shortest job first (coperativo, sem justiça)
- Shortest Remaining Time First
- Escalonamento por prioridades fixas (PRIOc, PROPp)
- Escalonamento por prioridades dinâmicas (PRIOd)
