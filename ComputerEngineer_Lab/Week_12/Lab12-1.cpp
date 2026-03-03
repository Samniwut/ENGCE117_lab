#include <stdio.h>
int *Dijkstra(int *L, int n);

int main() {
    int n = 5, i = 0, j = 0, *d, *g;
    
    g = new int[n * n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            g[i * n + j] = -1;
        }
    }
    g[0 * n + 1] = 100;   g[0 * n + 2] = 80;
    g[0 * n + 3] = 30;    g[0 * n + 4] = 10;
    g[1 * n + 2] = 20;    g[3 * n + 1] = 20;
    g[3 * n + 2] = 20;    g[4 * n + 3] = 10;

    d = Dijkstra(g, n);

    for (i = 0; i < n - 1; i++) {
        printf("%d\n", d[i]);
    }
    delete[] g;
   return 0;
}
int *Dijkstra(int *L, int n){
    int *D = new int[n];
    bool *visited = new bool[n]; 
    for (int i = 1; i < n; i++) {
        D[i] = L[0 * n + i]; 
        visited[i] = false; 
    }
    for (int count = 0; count < n - 2; count++) {
        int v = -1;
        for (int i = 1; i < n; i++) {
            if (!visited[i] && D[i] != -1) {
                if (v == -1 || D[i] < D[v]) {
                    v = i;
                }
            }
        }

        if (v == -1) break; 
        visited[v] = true;
        for (int w = 1; w < n; w++) {
            if (!visited[w]) {
                int weight_v_w = L[v * n + w];
                if (weight_v_w != -1) {
                    int new_dist = D[v] + weight_v_w;
                    if (D[w] == -1 || new_dist < D[w]) {
                        D[w] = new_dist;
                    }
                }
            }
        }
    }

    delete[] visited;
 int *result = new int[n-1];
    for(int i = 0; i < n-1; i++) {
        result[i] = D[i+1];
    }
    delete[] D;
    return result;
}
