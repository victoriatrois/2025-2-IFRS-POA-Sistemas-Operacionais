# Aula 10 - Algoritmos de substituição de escalonamento

## Atividade 00 - criação da VM a partir do disco disponibilizado

## Atividade 01 - Gerenciamento de Processos no Linux

Acesse o servidor aula.inf.poa.ifrs.edu.br e realize as seguintes etapas:

1. Desenvolva um Shell Script que gere um arquivo contendo todos os números pares de 1 até 1.000.

- O arquivo deve ser criado no diretório /tmp.
- O uso do comando sleep é permitido (o foco não é a velocidade).

2. Execute o script em segundo plano.
3. Encerre a sessão atual.
4. Abra uma nova sessão e verifique se o script foi finalizado ou se está em execução.
5. Caso o script ainda esteja em execução, identifique e finalize o processo.
6. Submeta telas da execução da atividade.

> Dicas:
> Para acompanhar o crescimento do arquivo, utilize:
> `tail -f <nome_do_arquivo>`

## Atividade 02 - Gerenciamento de Processos com Prioridades no Linux

Repita a atividade anterior, realizando as seguintes variações (altere para 10.000.000 execuções e retire o sleep):

1. Execute o script com alta prioridade já definida no momento da execução.

2. Após, execute o script com baixa prioridade já definida no momento da execução.

3. Compare os tempos de execução de cada caso e registre os resultados.

> Dica:
> Para definir a prioridade no momento da execução, utilize o comando nice.
> Para alterar a prioridade de um processo em execução, utilize o comando renice.

## Atividade 03 - Gerenciamento de Processos em C com Prioridades (nice/renice)

Utilize como base o programa Atividade_03.c e realize as seguintes alterações e testes:

1. Modifique o programa para que ele execute dois processos simultâneos (pai e filho).
2. Configure as prioridades utilizando o comando nice:

- Diminua a prioridade do processo pai.
- Aumente a prioridade do processo filho.

3. Verifique e registre qual processo finaliza primeiro.
4. Repita a execução, agora:

- Aumentando a prioridade do processo pai.
- Diminuindo a prioridade do processo filho.

5. Compare os resultados obtidos e descreva suas conclusões (quanto tempo foi a diferença de execução?).

## Atividade 04 - Gerenciamento de Threads no Windows com Prioridades

Utilize como base o programa Atividade_04.c e realize as seguintes alterações e testes:

1. Modifique o programa para que ele crie e execute duas threads simultâneas.
2. Execute o programa duas vezes:

- Primeira execução com alta prioridade.
- Segunda execução com baixa prioridade.
  → Compare os tempos de execução e registre as diferenças observadas.

3. Agora tente aumentar a prioridade da primeira thread e diminua a da segunda thread.

- Em seguida, inverta as prioridades (primeira thread com prioridade baixa e segunda com prioridade alta).
  → Analise se a alteração foi possível e quais foram os efeitos.

4. Elabore um comparativo dos resultados obtidos, descrevendo suas conclusões sobre o impacto da prioridade na execução das threads.
