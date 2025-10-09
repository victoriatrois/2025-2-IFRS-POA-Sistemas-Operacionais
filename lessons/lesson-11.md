# Aula 11 - Memória e armazenamento

Memória é onde os programas são executados. Ela é extremamente rápida e também volátil.

Para persitir dados, recorremos ao armazenamento.

A memória é uma grande tabela com células sequenciais, cada célula tem o seu próprio entereço.

> Tamanho dos tipos primitivos
> int = 4 bytes
> float = 4 bytes
> double = 8 bytes
> char = 1 byte

## Tipos de memórias

Existem diversos tipos de memórias, umas são mais rápidas, outras menos.

registradores - KB
caches - KB-MB
ram - MB-GB
↑ não voláteis

---

↓ voláteis
flash - GB
discos / mídias óticas TB
fita magnética PB

Quanto mais rápida, mais custosa em MB e energia
Quanto mais devagar mais capacidade

Os processos enxergam apenas a memória virtual

recomentação de leitura (do slide da primeira aula <https://wiki.inf.ufpr.br/maziero/lib/exe/fetch.php?media=socm:socm-livro-a5.pdf>)

```c
#include <stdio.h>
#include <stdlib.h>

unsigned char buffer[4096][4096] ;

int main ()
  {
    int i, j ;
    for (i=0; i<4096; i++) {
      for (j=o; j<4096; j++) {
        buffer[i][j]= (i+j) % 256 ;
      }
    }
  }
```

```c
#include <stdio.h>
#include <stdlib.h>

unsigned char buffer[4096][4096] ;

int main ()
  {
    int i, j ;
    for (i=0; i<4096; i++) {
      for (j=o; j<4096; j++) {
        buffer[j][i]= (i+j) % 256 ;
      }
    }
  }
```

- free: mostra status de memória
