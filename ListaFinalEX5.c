#include <stdio.h>

void ordenarPorInsercao(int matriz[][3], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 1; j < colunas; j++) {
            int chave = matriz[i][j];
            int k = j - 1;

            while (k >= 0 && matriz[i][k] > chave) {
                matriz[i][k + 1] = matriz[i][k];
                k--;
            }

            matriz[i][k + 1] = chave;
        }
    }
}

int main() {
    int matriz[][3] = {{3, 2, 1}, {6, 5, 4}, {9, 8, 7}};
    int linhas = 3;
    int colunas = 3,i,j;

    printf("Matriz original:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    ordenarPorInsercao(matriz, linhas, colunas);

    printf("\nMatriz ordenada:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
