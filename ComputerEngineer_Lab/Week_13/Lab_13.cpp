#include <stdio.h>
#include <stdlib.h>

int *KnapsackDP(int *w, int *v, int n, int wx);
int max(int a, int b);

int main() {
    int n = 5, wx = 11;
    int w[5] = {1, 2, 5, 6, 7};
    int v[5] = {1, 6, 18, 22, 28};
    int *x;
    x = KnapsackDP(w, v, n, wx);
    for (int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }

    return 0;
}
int max(int a, int b) {
    return (a > b) ? a : b;
}

int *KnapsackDP(int *w, int *v, int n, int wx) {
    int i, j;
    int **K = (int **)malloc((n + 1) * sizeof(int *));
    for (i = 0; i <= n; i++) {
        K[i] = (int *)malloc((wx + 1) * sizeof(int));
    }
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= wx; j++) {
            if (i == 0 || j == 0)
                K[i][j] = 0;
            else if (w[i - 1] <= j)
                K[i][j] = max(v[i - 1] + K[i - 1][j - w[i - 1]], K[i - 1][j]);
            else
                K[i][j] = K[i - 1][j];
        }
    }
    int *x = (int *)malloc(n * sizeof(int));
    int res = K[n][wx];
    int temp_w = wx;

    for (i = n; i > 0; i--) {
        if (res <= 0) {
            x[i - 1] = 0;
        } else if (res == K[i - 1][temp_w]) {
            x[i - 1] = 0;
        } else {
            x[i - 1] = 1; 
            res = res - v[i - 1];
            temp_w = temp_w - w[i - 1];
        }
    }
    return x;
}