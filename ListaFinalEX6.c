#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3


void buscaSequencial(int matriz[][COLUNAS], int valor, int *linhaEncontrada, int *colunaEncontrada) {
    int i,j;
    *linhaEncontrada = -1;
    *colunaEncontrada = -1;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] == valor) {
                *linhaEncontrada = i;
                *colunaEncontrada = j;
                return;
            }
        }
    }
}

int main() {
    int matriz[][COLUNAS] = {{3, 2, 1}, {6, 5, 4}, {9, 8, 7}};
    int valorProcurado;
    int linhaEncontrada, colunaEncontrada;

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valorProcurado);

    buscaSequencial(matriz, valorProcurado, &linhaEncontrada, &colunaEncontrada);

    if (linhaEncontrada != -1 && colunaEncontrada != -1) {
        printf("Valor encontrado na linha %d, coluna %d\n", linhaEncontrada, colunaEncontrada);
    } else {
        printf("Valor não encontrado na matriz.\n");
    }

    return 0;
}
