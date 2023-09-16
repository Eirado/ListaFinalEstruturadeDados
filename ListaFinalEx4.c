#include <stdio.h>

void trocarLinhas(int matriz[][3], int linha1, int linha2, int colunas) {
    int i;
    for (i = 0; i < colunas; i++) {
        int temp = matriz[linha1][i];
        matriz[linha1][i] = matriz[linha2][i];
        matriz[linha2][i] = temp;
    }
}

int particionar(int matriz[][3], int baixo, int alto, int colunaPivo) {
    int valorPivo = matriz[alto][colunaPivo];
    int i = (baixo - 1),j;

    for (j = baixo; j <= alto - 1; j++) {
        if (matriz[j][colunaPivo] > valorPivo) {
            i++;
            trocarLinhas(matriz, i, j, 3);
        }
    }
    trocarLinhas(matriz, i + 1, alto, 3);
    return (i + 1);
}

void quicksortMatriz(int matriz[][3], int baixo, int alto, int colunaPivo) {
    if (baixo < alto) {
        int pi = particionar(matriz, baixo, alto, colunaPivo);

        quicksortMatriz(matriz, baixo, pi - 1, colunaPivo);
        quicksortMatriz(matriz, pi + 1, alto, colunaPivo);
    }
}

int main() {
    int matriz[][3] = {{3, 2, 1}, {6, 5, 4}, {9, 8, 7}};
    int linhas = 3;
    int colunas = 3;
    int colunaPivo = 0, i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    quicksortMatriz(matriz, 0, linhas - 1, colunaPivo);

    printf("\n");

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
