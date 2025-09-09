# Aula 06 - Revisão para prova

## Lista 01

1. Para que serve um sistema operacional?
   Para mediar o acesso feito pelo usuário ao hardware.

2. Por que as aplicações não devem acessar diretamente o hardware?
   Porque isso compromete 4 questões que giram em torno do hardware: a. segurança, b. estabilidade, c. abstração e d. eficiência de gerenciamento

   a. segurança - acesso direto ao hardware significa dados, disco, cpu vulneráveis.

   b. estabilidade - se acessassem diratamente o hardware, dois programas poderiam tentar alocar o mesmo recurso ao mesmo tempo.

   c. abstração - acesso direto ao hardware significaria saber as minúcias de cada máquina em que se fosse trabalhar.

   d. gerenciamento eficiente - alocação de CPU, memória e dispositivos estaria exposta às aplicações que poderiam se apossar deles para seu maior benefício.

3. Explique os modos de operação do núcleo.
   supervisor / núcleo / sistema / monitor / kernel é um modo em que todo o hardware está acessível para a execução de um código. É nele que o SO roda e é responsável pelo gerenciamento de processos de memória, controle de dispositivos e segurança e proteção (do hardware, de si e dos processos).

   usuário / userspace é um modo de execução em que um conjunto selecionado de instruções, registradores e portas de E/S estão disponíveis. É nele em que as aplicações rodam.

4. Explique o conceito de interrupção. Quando ocorre e qual a sua utilização?
   Sinal enviado ao processador para interromper temporariamente a execução do programa atual e tratar de um evento de alta prioridade: dispositivos, instrucões especiais, exceções.

   Ocorre quando dispositivos de E/S, timers, execuções ou chamadas de sistemas necessitam de atenção imediata.

   É utilizada para gerenciar dispositivos, eventos assíncronos, multitarefas e comunicação com o hardware de forma eficiente.

5. Explique a finalidade de uma chamada de sistema em um sistema operacional.
   Chamada que uma aplicação, rodando no nível de usuário, faz para o hardware para requisitar acesso a ele.

6. Cite e explique as estruturas de SO
   Monolítico: tudo no kernel, rápido mas menos seguro.

   Em camadas: núcleo organizado hierarquicamente, modular e fácil de manter.

   Microkernel: apenas funções essenciais no kernel, maior segurança e estabilidade.

   Modular: kernel com módulos carregáveis dinamicamente, combina velocidade e flexibilidade.

7. Defina o conceito de virtualização e mostre suas vantagens.
   Virtualização é uma forma de rodar vários SOs rodem simultaneamente no mesmo hardware. Esse processo é uma mediação realizada por um hypervisor ou Virtual Machine Monitor (VMM).

   Dentre as vantagens da virtualização, temos melhor utilização de recursos, isolamento, segurança, facilidade de teste, portabilidade e redução de custos.

8. Explique a diferença entre programa e tarefa.
   Um programa é um conjunto de instruções encapsuladas em um arquivo executável.
   A tarefa é a execução das instruções que compõe um programa.

9. Explique o conceito de sistema preemptivo e cooperativo.
   Sistemas preemptivos são sistemas que interrompem um processo em execução para dar vazão a outros processos, mesmo que eles não o interrompam.
   Já em sistemas cooperativos quem decide quando a CPU será cedida são os próprios processos em execução.

10. Em SO, o que é o programa monitor?
    Termo antigo que se refere ao que hoje chamamos de kernel.

11. Quais são os recursos que o SO pode gerenciar?
    Recursos (processador, memória, dispositivos, arquivos, proteção)

12. Cite os estados das tarefas em sistemas:
    a. Sistemas monotarefa
    novo ou carregamento / em execução / encerrada
    b. Sistemas multitarefa
    novo / pronto / executando / bloqueado ou em espera / encerrado
    c. Sistemas de tempo compartilhado
    novo / pronto / executando (por um tempo determinado) / bloqueado ou em espera / encerrado

13. O que é e por que é importante a troca de contexto?
    Troca de contexto é o nome dado para o processo de salvar o estado de um processo em execução para que outro possa assumir a CPU. Quando um processo em espera ou bloqueado volta a ser executado, seu estado é restaurado e ele continua exatamente de onde parou.

    A troca de contexto é importante porque permite a multitarefa, garante o tempo compartilhado, melhora a responsividade e assegura justiça entre processos.

14. Em S.O. baseados no Unix, para que servem os comandos:
    a. pstree - mostra os processos em execução em forma de árvore
    b. htop - mostra o uso da CPU, memória e processos, gerenciador de tarefas do linux, versão mais completa do top
    c. ps - lista processos em execução
    d. nice - executa um comando com uma prioridade definida (nice)
    e. renice - altera a prioridade de um processo já em execução
    f. fg - traz um processo do segundo para o primeiro plano
    g. bg - leva um processo suspenso ou em execução para segundo plano
    h. jobs - lista os processos iniciados na sessão atual do terminal
    i. kill - envia um sinal a um processo

15. No Linux, o que acontece quando um processo pai é encerrado?
    Os processos filhos do pai encerrado seguem sendo executados "normalmente", tornando-se órfãos. Para garantir a monitoração e finalização desses processos órfãos e evitar processos zumbis, o init adota esses processos.

    > init (initialization) - primeiro processo iniciado pelo kernel, identificado por um PID de número 1, ele tem a função de iniciar e gerenciar todos os outros processos do sistema.

16. Explique a diferença em thread e processo.
    Um processo é uma alocação de recursos, um programa em execução, uma thread é uma unidade de execução dentro de um processo, um fluco de execução dentro de um processo.

    Um processo pode ser composto por threads, mas uma thread só vai existir dentro de um processo.

    As threads de um processo compartilham recursos, mas têm sua pilha e registradores isolados uns dos outros.

17. Explique o que é TCB (Task Control Block).
    Uma estrutura de dados mantida pelo SO, nela ficam todas as informações necessárias para gerenciar e controlar a execução de uma tarefa ou thread.

    É ele que é consultado pelo SO para que seja decidida qual tarefa executar e é ele também quem salva o estado da thread durante uma troca de contexto.

    > Tarefa vs. Thread
    > Uma tarefa é um conceito mais amplo de unidade de execução, que pode ser implementada como processo ou thread. Já a thread é uma linha de execução específica dentro de um processo.

18. Explique a diferença entre os comandos top e htop.
    top - instalado por padrão, de interface simples e textual, permite navegação, porém limitada, realizar filtros e matar processos, mas com o desafio de os comandos não serem muito intuitivos.Exibe, em tempo real, os processos ativos no sistema:
    (PID, usuário, uso da CPU, uso da memória, tempo de execução)

    htop - necessita de instalação, tem uma interface colorida e organizada, permite navegação por setas e menus, exibe gráficos da CPU, memória e swap, permite alterar a prioridade de um processo (nire e renice) e encerrar processos.

19. No linux, como iniciar um programa já em segundo plano?
    No Linux, basta adicionar & ao final do comando para iniciar um programa em segundo plano
    `./programa &`

    Opcionalmente, pode-se usar nohup para que continue mesmo após fechar o terminal.
    Após executar um programa normalmente, pode-se suspendê-lo com CTRL+Z, e colocá-lo em segundo plano com `bg <job id>`.

20. Cite duas formas de implementar a comunicação entre processos.
    Memória compartilhada e troca de mensagens

21. Explique a diferença de comunicação de processos usando Sockets, Pipes e
    Fila de Mensagens.
    Sockets - canais bidirecionais, criados para comunicação em rede, também são usados localmente.

    Pipes - canais unidirecionais entre processos relacionados (pai - filho), implementados no kernel como um buffer FIFO. Exemplo: ls | grep ".txt"

    Fila de Mensagens - processos não relacionados podem trocar informações a partir de mensagens que possuem cabeçalho e dados, as mensagens ficam armazenadas até que sejam lidas, é possível priorizar a entrega das mensagens. Usadas quando se precisa de mais organização do que com pipes.

22. Explique a necessidade dos processos se comunicarem.
    Os processos precisam se comunicar para compartilhar dados, cooperar, sincronizar tarefas e melhorar a eficiência do sistema, garantindo que aplicações complexas funcionem corretamente.

23. Explique as diferenças entre cd, cd.., cd /, cd - , cd . cd../home
    cd - leva para o diretório home ($home)
    cd.. - leva para o diretório pai do diretório atual
    cd / - leva para a raiz do sistema (root)
    `cd -` - retorna para o diretório visitado antes do atual (como o voltar do navegador)
    cd . - não leva para lugar algum
    cd../home - sobe um nível em relação ao diretório atual e para o diretório informado após a barra, nesse caso o home

24. No Linux, qual é a diferença entre $ e # no prompt?
    $ usuário comum, precisa do sudo para alterar arquivos críticos
    `#` usuário root, tem acesso total ao sistema

25. Em S.O., o que se entende por afinidade de tarefa?
    Afinidade de tarefa é a política que define em qual CPU uma tarefa deve rodar em sistemas multiprocessados. Serve para melhorar desempenho, aproveitar cache e reduzir custos de migração entre CPUs.

26. Como mostrar todos os processos que estão sendo executados no linux e no windows?
    linux
    ps -e - mostra processos ativos
    ps -ef - mostra os processos ativos descriminando UID, PID, PPID, hora comando, etc
    top
    htop
    windows
    tasklist (cmd)
    Get-Process (PowerShell)
    Ctrl+Alt+Del

27. Com base nas afirmações abaixo, selecione a alternativa correta:
    ✅ I – O sistema operacional é uma camada de software que opera entre o hardware e os programas aplicativos voltados ao usuário final.
    🤨 II – O sistema operacional é uma estrutura de software ampla, muitas vezes complexa, que incorpora aspectos de baixo e alto nível.
    ❌ III – Exige que o programador domine como funciona cada dispositivo.
    ✅ IV – Oferece ao programador uma forma homogênea de acesso aos dispositivos físicos.

As afirmações corretas são:
a. I e II
b. I, II e III
➡️ c. I, II e IV
d. II e IV
e. Todas

28. Com relação à criação de um novo processo no Linux por meio de um fork, assinale com V (verdadeiro) ou F (falso):
    (V) A memória entre os dois processos possui as mesmas variáveis e valores.
    (F) A memória dos dois processos é compartilhada.
    (F) O código-fonte não é o mesmo.
    (V) A criação do processo é feita por meio de uma chamada de sistema.

29. Em um sistema Linux, qual comando é utilizado para verificar os usuários conectados no sistema e qual processo é utilizado para encerrar (derrubar) um usuário conectado?

    1. rodar who ou w
    2. identificar o pts do usuário que queremos derrubar
    3. rodar ps -t pts/`<pts identificado no passo 2>`
    4. identificar o PID do usuário que se quer derrubar
    5. roda sudo kill -9 `<PID identificado no passo 3>`
       Alternativamente podemos pular do passo 1 para: identificar o nome do usuário que queremos derrubar > sudo pkill -KILL -u `<nome do usuário identificado no passo 1>`

30. Escreva P para preemptivo ou C para cooperativo em cada afirmação:
    (C) A tarefa permanece no processador até que libere voluntariamente.
    (P) A tarefa pode perder o processador caso termine seu quantum de tempo.
    (P) A tarefa pode perder o processador caso execute uma chamada de sistema.
    (C) A tarefa permanece no processador até terminar de executar.
    (P) A tarefa pode perder o processador caso ocorra uma interrupção que acorde uma tarefa mais prioritária.

31. Com relação às prioridades das tarefas no Windows e Linux, utilize V para verdadeiro e F para falso:
    (V) No Windows, o usuário pode atribuir uma prioridade ao processo.
    (V) No Windows, o usuário pode atribuir uma prioridade diferente para cada thread do processo.
    (V) No Linux, podemos ajustar a prioridade dos processos por meio dos comandos nice e renice.
    (V) No Linux, existem tarefas interativas e de tempo real.

32. Em um sistema Multitarefa Preemptivo, quais são as transições de estados das tarefas válidas?
    nova - pronta - executando - terminada
    ..........|..........|
    ..........- suspensa -

33. O que faz o comando:
    chmod u-x enviar.sh
    Remove o privilégio de execução do dono do arquivo `enviar.sh`

34. O que faz o comando:
    chmod 754 enviar.sh
    Dá permissão de leitura, escrita e execução para o dono do arquivo, privilégio de leitura e execução para grupos de usuários e ppenas leitura e para outros.

35. O que faz o comando:
    apt install apacheserver
    Baixa e instala o pacote indicado, se for um pacote válido.

## Lista 02

Crie uma MV (Linux Debian12) utilizando o disco disponível no link abaixo.

A MV deve usar exatamente 4GB de Memória RAM e uma interface de Rede conectada em modo Bridge.

Obs.: Existe um usuário chamado “buzz" e sua senha é “prova”. A senha de root é “zeus".

<https://drive.google.com/file/d/1EEPP11q_IvvTBbEF102irKfoxtyh497H/view?usp=drive_link>

Atividade: Submeta a tela do Terminal exibindo o IP da MV.

## Lista 03

Acessar MV e descreva a saída dos comandos abaixo:
a. cat /proc/sys/kernel/version

b. cat /proc/sys/kernel/hostname

c. cat /proc/sys/kernel/ostype

Atividade: mostrar a tela de retorno da cada Comando e descrever a saída.

## Lista 04

a. Acessar a Máquina Virtual (MV).
b. Criar um Shell Script que gere no console todos os valores pares, de 1 até 1.000, utilizando sleep 1 a cada número, e gravando a saída em um arquivo chamado pares.txt.
nano pares.txt

    #!/bin/bash
    for ((i=2; i<=3000000; i+=2))
    do
    echo "$i" >> geraPares.txt
    done

    ctrl+x
    enter

c. Criar outro Shell Script que gere no console todos os valores ímpares, de 1 até 1.000, também utilizando sleep 1 a cada número, e gravando a saída em um arquivo chamado impares.txt.
nano impares.txt

    #!/bin/bash
    for ((i=1; i<=3000000; i+=2))
    do
    echo "$i" >> geraImpares.txt
    done

    ctrl+x
    enter

d. Executar os dois scripts em paralelo, cada um em um terminal diferente.
e. No terceiro terminal, finalizar o script impares, capturar a tela (print) de todos os terminais e postar como comprovação.

## Lista 05

a. Acessar a Máquina Virtual (MV).
b. Na MV, executar o comando top.
top
c. Colocar o comando top para rodar em segundo plano.

d. Visualizar os processos em segundo plano.
jobs
e. Alterar o processo em segundo plano para o primeiro plano.
fg
f. Mostrar os comandos utilizados em cada etapa.

## Lista 06

a. Acesse a Máquina Virtual (MV).
b. Acesse o diretório /tmp (localizado na raiz /).
cd /tmp.
c. Crie uma pasta chamada aula.
mkdir aula
d. Acesse a pasta aula.
cd aula
e. Mostre o caminho do diretório atual usando o comando pwd
pwd
f. Publicar evidência dos comandos utilizados e da tela, comprovando a execução.

## Lista 07

a. Acesse a Máquina Virtual (MV).
b. Acesse o diretório /tmp/aula.
cd /tmp/aula.
c. Crie um arquivo chamado notas.txt.
touch notas.txt
d. Adicione o conteúdo abaixo ao arquivo notas.txt:
Aluno1: 8
Aluno2: 7
Aluno3: 9
nano notas.txt
insere o texto
ctrl+x
enter
cat notas.txt
e. Crie uma cópia do arquivo notas.txt com o nome notas_backup.txt.

f. Renomeie o arquivo notas.txt para notas_2025.txt.

g. Liste todos os arquivos do diretório para verificar as alterações.
ls -la
h. Poste evidência dos comandos utilizados e do resultado na tela, comprovando a execução de todas as ações.

## Lista 08

a. Acesse a Máquina Virtual (MV).
b. Acesse o diretório /tmp.
cd /tmp.
c. Crie um diretório chamado dados e, dentro dele, crie outro diretório chamado SisOp dentro de Disciplinas.
mkdir dados && cd dados && cd Disciplinas && mkdir SisOp
d. Acesse o seu diretório HOME e crie um arquivo chamado aula01.txt.
cd $ && touch aula01.txt
e. Acesse o diretório raiz /.
cd /.
f. Estando no diretório raiz, copie o arquivo aula01.txt para o diretório SisOp, localizado dentro de Disciplinas que está no tmp.

g. Mostre evidência dos comandos utilizados e dos resultados na tela, comprovando a execução.

## Lista 09

a. Acesse a Máquina Virtual (MV).
b. Acesse o diretório /tmp.
cd /tmp.
c. Crie um diretório chamado Documentos e, dentro dele, crie um arquivo chamado senhas.
mkdir Documentos && cd Documentos && touch senhas
d. Acesse o diretório raiz /.
cd ..
e. Volte para o diretório HOME e apague o diretório Documentos, criando recentemente em tmp.
cd $
f. Mostre evidência dos comandos utilizados e dos resultados na tela, comprovando a execução.

## Lista 10

a. Acesse a Máquina Virtual (MV).
b. Instalar o pacote "btop".
sudo -apt install btop
c. Mostrar evidencias da instalação e da execução.
