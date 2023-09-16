#include <stdio.h>

void ordenarPorInsercaoDecrescente(int arr[], int tamanho) {
    int i;
    for (i = 1; i < tamanho; i++) {
        int chave = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < chave) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = chave;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int tamanho = 5,i;

    for (i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ordenarPorInsercaoDecrescente(arr, tamanho);

    for (i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
