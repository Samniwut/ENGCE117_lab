#include <stdio.h>
int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x);
int main() {
    int n = 5, wx = 11;
    int w[5] = { 1, 2, 5, 6, 7 };
    int v[5] = { 1, 6, 18, 22, 28 };
    int *x, vx;

    x = new int[n];
    

    vx = KnapsackBT(w, v, n, wx, 0, x);

    printf("Value = %d \n", vx);

    for (int i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }

    delete[] x; 
    return 0;
}

int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x) {
    if (i == n || wx == 0) {
        return 0;
    }
    int res_exclude = KnapsackBT(w, v, n, wx, i + 1, x);
    int res_include = 0;
    if (w[i] <= wx) {
        res_include = v[i] + KnapsackBT(w, v, n, wx - w[i], i + 1, x);
    }
    if (res_include > res_exclude) {
        x[i] = 1; 
        return res_include;
    } else {
        x[i] = 0;
        return res_exclude;
    }
}
