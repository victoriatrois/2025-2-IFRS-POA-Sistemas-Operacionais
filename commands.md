# Linux Commands Categorized

## General Commands

- clear: limpa a tela
- ls: lista arquivos
- man `<command>`: documentação do comando
- ls -la: lista todos os arquivos, inclusive ocultos, com detalhes
- q: sair/quit
- history: mostra o histórico de comandos
- `<inicial>` + tab: autocompleta comandos
- echo: imprime texto na tela
- date: mostra a data e hora atuais
- cal: mostra o calendário
- pwd: mostra o diretório atual
- uname -a: mostra informações do sistema
- hostname: mostra o nome do host
- whoami: mostra o usuário atual
- env: mostra variáveis de ambiente
- export: define variáveis de ambiente
- alias: cria atalhos para comandos
- unalias: remove atalhos
- printf: imprime texto formatado
- sleep `<segundos>`: pausa a execução

## User/Session Info

- w: mostra usuários conectados e o que estão fazendo
- who: mostra usuários conectados
- who | wc -l: conta quantos usuários estão conectados

## Navigation Commands

- cd: muda de diretório
- cd ~ ou cd: volta para o diretório home
- cd -: volta para o diretório anterior
- cd ..: sobe um nível
- .: diretório atual
- ./`<arquivo>`: executa arquivo no diretório atual
- /: raiz do sistema
- /home/`<username>`: diretório home do usuário

## File/Directory Management

- mkdir: cria diretório
- rmdir: remove diretório vazio
- rm -rf `<nome>`: remove diretório/arquivo recursivamente
- touch `<nome.ext>`: cria arquivo vazio
- mv `<origem>` `<destino>`: move ou renomeia arquivos/diretórios
- cp `<origem>` `<destino>`: copia arquivos/diretórios
- cat `<arquivo>`: exibe o conteúdo de um arquivo
- tac `<arquivo>`: exibe o conteúdo de um arquivo de trás para frente
- less `<arquivo>`: visualiza arquivos página a página
- more `<arquivo>`: visualiza arquivos página a página
- head `<arquivo>`: mostra as primeiras linhas de um arquivo
- tail `<arquivo>`: mostra as últimas linhas de um arquivo
- grep `<busca>` `<arquivo>`: busca por texto em arquivos
- find `<caminho>` -name `<padrão>`: busca arquivos por nome
- chmod `<permissões>` `<arquivo>`: altera permissões de arquivos
- chown `<usuário>:<grupo>` `<arquivo>`: altera dono de arquivos

## Process Management

- ps -aux: lista todos os processos
- top: monitor de processos em tempo real
- htop: monitor de processos avançado (precisa instalar)
- apt install htop: instala o htop
- kill -9 `<pid>`: encerra processo pelo ID
- killall `<nome>`: encerra todos os processos com o nome
- bg: coloca processo em background
- fg: traz processo para foreground
- jobs: lista processos em background

## Editing/Text

- nano `<arquivo>`: editor de texto simples
- vim `<arquivo>`: editor de texto avançado
- emacs `<arquivo>`: editor de texto avançado

## Compilation/Development

- gcc `<arquivo.c>` -o `<executável>`: compila código C
- g++ `<arquivo.cpp>` -o `<executável>`: compila código C++
- make: automatiza compilação

## Funny/Entertainment Commands

- fortune: biscoito da sorte
- cowsay `<entrada>`: balão de fala com vaca
- aafire: fogo em arte ASCII
- oneko: gato/doguinho perseguindo o mouse (requer X server)
- bb: animação em ASCII
- sl: trem em ASCII
- cmatrix: efeito matrix em ASCII
- xeyes: olhos que seguem o mouse (requer X server)
- figlet `<texto>`: texto grande em ASCII
- toilet `<texto>`: texto estilizado em ASCII

## Package Management

- apt update: atualiza lista de pacotes
- apt install `<pacote>`: instala pacote
- apt remove `<pacote>`: remove pacote
- yum install `<pacote>`: instala pacote (CentOS)

## SSH/Remote

- ssh `<usuário>`@`<host>`: conecta a servidor remoto via SSH
- scp `<origem>` `<destino>`: copia arquivos via SSH
- exit: encerra sessão SSH

## Shell Scripting

- #!/bin/bash: indica o interpretador bash
- while [ $contador -ne 50 ]; do ... done: exemplo de loop
- sleep `<segundos>`: pausa dentro de scripts

## Miscellaneous

- uptime: mostra há quanto tempo o sistema está ligado
- df -h: mostra uso de disco
- du -sh `<diretório>`: mostra uso de espaço de um diretório
- free -h: mostra uso de memória
- ifconfig: mostra configurações de rede
- ping `<host>`: testa conectividade de rede
- tar -czvf `<arquivo.tar.gz>` `<diretório>`: compacta arquivos
- unzip `<arquivo.zip>`: descompacta arquivos zip
- zip `<arquivo.zip>` `<arquivos>`: compacta arquivos em zip
