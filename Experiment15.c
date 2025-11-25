15. DEPTH FIRST SEARCH (DFS)
Aim

To implement Depth First Search using adjacency matrix.

Algorithm

Read number of vertices

Create adjacency matrix

Use stack/recursion

Mark visited and traverse depth-wise.

Code
#include <stdio.h>

int visited[10];

void dfs(int a[10][10], int n, int v) {
    visited[v] = 1;
    printf("%d ", v);

    for (int i = 1; i <= n; i++)
        if (a[v][i] == 1 && !visited[i])
            dfs(a, n, i);
}

int main() {
    int n, a[10][10];
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    dfs(a, n, 1);
}

Sample Output
1 2 4 3

Result

DFS traversal executed successfully.
