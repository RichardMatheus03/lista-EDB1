## Recursão
A função utiliza duas variáveis globais: contador (inicializada em 0) e indice, que são manipuladas dentro da recursão.
A cada chamada, a função verifica se o elemento na posição arr[indice] corresponde ao valor alvo.
Se for encontrado, o contador é incrementado.
Em seguida, o indice também é incrementado e a função é chamada novamente, até que todos os elementos sejam percorridos.

- Parâmetros: recebe uma string (str) e um caractere alvo (alvo).

- Retorno: retorna a quantidade de vezes que o caractere alvo aparece na string.

## Busca sequencial
Ordenação – o vetor é organizado em ordem crescente pelo Bubble Sort.

Verificação de duplicados – um vetor auxiliar (vistos) guarda os valores já encontrados.

Contagem – para cada elemento do vetor original, é feita uma busca sequencial ordenada em vistos.

Se o valor ainda não estiver em vistos, ele é adicionado e a contagem de distintos (quantidade_diferentes) é incrementada.

Ao final, a função retorna a quantidade de elementos distintos no vetor.

- Parâmetros: recebe um vetor de inteiros (arr).

- Retorno: retorna um número inteiro representando a quantidade de elementos distintos presentes no vetor.

## Busca binária
A função busca_binaria procura a primeira versão ruim dentro de um vetor de versões ordenadas. O processo funciona utilizando a lógica do algoritmo de busca binária, e sabendo que o arr está ordenado e a versão defeituosa sempre vai ser os valores crescentes

Se arr_ordenado[meio] for uma versão ruim (is_bad_version), ele é salvo como candidato e a busca continua à esquerda (tentando encontrar uma versão ruim anterior).

Caso contrário, a busca avança para a direita.

Resultado – ao final, retorna a primeira versão ruim encontrada no vetor.

- Parâmetros: recebe um vetor de versões ordenadas (arr_ordenado).

- Retorno: retorna o valor da primeira versão ruim encontrada no vetor.
