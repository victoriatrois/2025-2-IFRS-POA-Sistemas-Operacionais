# Aula 01 - Apresentação e Tipos e conceitos de sistemas operacionais/ Chamadas de sistemas

## Apresentação

A disciplina de SO é uma continuação da disciplina de redes, onde vê-seos conteúdos:

- IV4
- IPV6
- Virtualizações

Na disciplina de Sistemas operacionais veremos:

- Theards vs. processos - programação paralela
- Escalonamentos
- Máquina virtual
- Containers

> A avaliação será a composta pela média simples de três _provas_
> Cada prova terá uma recuperação e caso não seja o suficiente para desenvolver o conteúdo - o que se comprova pela média 7,faz-se uma recuperação geral, onde nota mínima para aprovação é 5.

Primeira aula: 30/07
Última aula - exame: 10/12

> Ementa, plano e cronograma da disciplina estão no Moodle.

## Tipos e conceitos de sistemas operacionais / Chamadas de sistemas

> Bibliografia: <http://creativecommons.org/licenses/by-nc-sa/3.0/deed.pt_BR>

### História do Sistema Operacional

Para o que surgiram os computadores?
Para realizar cálculos complexos
Cáculos de que tipo?
De balística (trajetória)

> O ENIAC foi a primeira máquina criada para tal fim.

A programação era feita diretamente no hardware e um computador servia a um fim específico para o qual ele foi programado, não existia programação perfectiva, para isso era necessário criar uma máquina que executasse a nova funcionalidade.

> O ENIAC foi a primeira máquina criada para tal fim.

Um sistema operacional é um sistema que consegue executar um tipo de processamento a partir da entrada inserida.

Hoje em dia tem-se a tecnologia chamada plug and play, onde o sistema operacional faz a configuração do hardware conectado.

Mecânico é mais primitivo que analógico, o analógico pode ser automatizado.

#### Anos 40 (pós-guerra)

O programa:

1. executava um programa por vez

O programador programava:

1. A carga do programa em memória
2. a varredura dos periféricos de entrada para busca de dados
3. o programa
4. o envio dos resultados para os periféricos de saída byte a byte

#### Anos 50

Os sistemas fornecem bibliotecas que encapsulavam o acesso aos periféricos

#### 1961

#### 1965

#### 1969

#### 1981

#### 1984

#### 1985

#### 1988

#### 1991

#### 1993

#### 1995

#### 1999

#### 2001

#### 2005

#### 2007

#### 2010

#### 2015

### O que é um sistema operacional?

Uma camada de abstração, que é um software e que age como mediador entre o hardware os programas com os quais o usuário final interage.

Camada de software que dá acesso de forma homogênea do hardware ao usuário.

### O que é um driver?

> Extensões agregadas ao SO que o permitem reconhecem um novo hardware.

Dispositivo de gerência de memória física que incorpora aspectos de baixo nível
Oferece uma forma homogênea de acesso aos dispositivos físicos.

#### Objetivos do Sistema Operacional

1. Prover interfaces simples de usar
2. Tornar aplicativos independentes do hardware
3. Definir interfaces de acesso homogêneas para dispositivos com tecnologias distintas
4. Gerenciar recursos (tarefas, proteção, arquivos, memória, rede, energia)

##### Gerencia de processador

\_ que não dá importância total a um processo sendo executado, troca o contexto, e permite que um processo que aloca muito recurso

###### Unidade de medida do computador

hert = 1 instrução por segundo
1000 hertz = 1000 instruções por segundo - 1 kilohertz (khz)
1000 kilohertz = 1 megahertz = 1.000.000 hertz

1 gigahert (ghz) = 1 bilhão de instruções por segundo - 31 anos

Hoje um processor mediano (i7 de 8a geração) roda a velocidade de 4.6 Ghz = 4.600.000.000 por segundo

m - 60s
1h - 3600s
1d - 86400s
1a (365) 31.536.000s

###### Ciclo do de instrução processador

busca, decodifica, executa

interrupões quebram o cliclo de instrução do processador
quando o computador fica em estado "idle", a instrução que ele está decodificando está vazia.

Interrupções são processos de alta prioridade

Aplicações não tem acesso ao hardware visto que isso é papel do sistema operacional, logo as aplicações se conectam com o SO e ele se conecta com o hardware.

Tais processos são identificados por flags que definem o nível de acesso ao hardware.

##### Gerencia de memória

Memórias alocadas para um determinado processo devem ser protegidas e mantidas de forma isolada de modo que um outro processo não as utilize.

##### Gerencia de dispositivos

##### Gerencia de arquivos

global search, iniciar, app vault
ponto de montagem vs C, F, etc.

##### Gerencia de proteção

Firewall, multi usuários (acessar de forma simultânea o sistema operacional)

## Perguntas

_Ambiente gráfico vs. sistema operacional_
O ambiente gráfico não gerencia recursos, ele é uma camada intermádiária entre o sistema operacional e o usuário final.
