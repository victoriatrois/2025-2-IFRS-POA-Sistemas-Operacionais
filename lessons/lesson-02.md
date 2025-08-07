# Aula 02 - Classificação de S.O. Chamadas de sistemas

## Tipos de Sistemas operacionais

### Sistemas Monolíticos - mononúcleo - procedural

Linux antigos, ...

Programa de bloco único que é executado no núcleo do SO.

energia
energiza-se a placa mãe
roda-se a bios
bios (basic input/output system)
um programa somente de leitura, que não perde memória, que apesar disso, aceita configurações
ela não perde a memória porque possui uma pilha que armazena as configurações da bios
a bios procura o disco de incialização
ao achá-lo, instrui que o SO execute o kernel do SO
núcleo

### Sistemas de camadas

TCP/IP, "ozy", Linux mais modernos

Quanto mais camadas, mais burocrático, vulgo lento, fica o sistema.

## Sistemas micronúcleos

Symbian, Minix 3

## Sistemas híbridos

MacOS e iOS

## Sistemas Máquina Virtual

Emulação de um computador completo rodando em cima de outro computador.

Já que o computador é completamente emulado, o hardware também é. Essa [] de [] gera um problema de desempenho

## Sistemas containers

Diferentemente das máquinas virtuais, os conteiners utilizam parte do SO para conversar com o hardware isoladamente.

Orquestradores de containers: Azure, Amazon...

## Sistemas Exonúcleos

Calculadora

### Sistemas Uninúcleo - favorito do Timóteo kkkk

Sistemas operacionais específicos para hardware específicos.

## Tarefas vs. Processos

Tarefa tem estado, ela é a execução de um programa.
Gerenciador de tarefas - gerencia programas em execução. - Programa rodando

Tarefas podem ser implementadas em threads ou processos.

Threads executam em processos e processos executam em processos
ao executar um processo temos ao menos uma thread.

Uma tarefa pode ser executada em mais de uma thread.

---> definir programa

O sistema operacional é o responsável por executar

### Sistema monotarefa

caixa de supermercado

### Sistema multitarefa

atendente do banco interrompe o atendimento para o cliente pegar um documento que faltou e voltar direto nele quando tiver finalizado a tarefa intermediária.

### Sistema de tempo compartilhado

Pomodoro - executa a tarefa por um tempo determinado, acaba o tempo, muda de tarefa mesmo que a tarefa não esteja concluída, e cicla entre as tarefas até finalizá-las.

## Atividade prática

Estabelecer uma conexão cliente-servidor com o servidor público do IFRS POA através de uma chave SSH (porta 22) via putty.

passo a passo que eu fiz

1. abri o terminal
2. rodei `ssh <meu usuário>@aula.inf.poa.ifrs.edu.br`
3. inseri minha senha
4. voilá

O que fazer?
rodar comandos linux

No linux, o usuário que consegue fazer alterações é o root.

### Commands

#### Comandos gerais

~ - home
$ - comum
contro l - "limpa a tela" (sobre o conteúdo da tela)
clear - limpa
ls - list
man `<command>` - command documentation
ls -la - lista todos os arquivos, ocultos inclusos, e seus detalhes
q - quit
w / who - mostra usuários conectados
`<inicial>` + tab - mostra os comandos que iniciam com a string informada
history - mostra o histórico do teclado

#### Comandos de navegação

cd - change directory
/ - root or directory representation
/home/`<username>` - working directory
cd ~ ou somente cd - volta pra casa
cd - volta pra pasta anterior
. = diretório atual
./ = diretório atual + nome do arquivo
cd . = não nos move de lugar
cd .. = move um nível acima da pasta atual
mk dir = make directory
rmdir ou rm -rf (recursively forced) + `<nome do diretório ou arquivo>` = deleta a pasta mesmo que vazia
touch `<nome do arquivo>`.`<extenção do arquivo>` = cria um arquivo

backup de linux = salvar home e etc

### funny comamnds

fortune - biscoito da sorte
cowsay `<entrada>`
bb

arte asc
