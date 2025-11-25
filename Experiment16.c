16. BREADTH FIRST SEARCH (BFS)
Aim
To implement BFS using adjacency matrix.
Algorithm


Use queue


Start from source node


Visit all neighbours level-wise.


Code
#include <stdio.h>

int queue[10], front = 0, rear = -1, visited[10];

void bfs(int a[10][10], int n, int v) {
    rear++;
    queue[rear] = v;
    visited[v] = 1;

    while (front <= rear) {
        v = queue[front++];
        printf("%d ", v);

        for (int i = 1; i <= n; i++)
            if (a[v][i] == 1 && !visited[i]) {
                rear++;
                queue[rear] = i;
                visited[i] = 1;
            }
    }
}

int main() {
    int n, a[10][10];
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    bfs(a, n, 1);
}

Sample Output
1 2 3 4

Result
BFS traversal executed successfully.

✅ 7. MERGE SORT
Aim
To implement Merge Sort in C.
Algorithm


Divide array into two halves


Recursively sort each half


Merge two sorted halves


Continue till array is sorted.


Code
#include <stdio.h>

void merge(int a[], int l, int m, int r) {
    int i = l, j = m + 1, k = l, temp[50];

    while (i <= m && j <= r)
        temp[k++] = (a[i] < a[j]) ? a[i++] : a[j++];

    while (i <= m) temp[k++] = a[i++];
    while (j <= r) temp[k++] = a[j++];

    for (i = l; i <= r; i++)
        a[i] = temp[i];
}

void mergesort(int a[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main() {
    int n = 5, a[] = {38, 27, 43, 3, 9};
    mergesort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

Sample Output
3 9 27 38 43

Result
Merge Sort executed successfully.

✅ 8. QUICK SORT
Aim
To implement Quick Sort in C.
Algorithm


Choose pivot


Partition array


Recursively sort left and right subarrays.


Code
#include <stdio.h>

int partition(int a[], int low, int high) {
    int pivot = a[low], i = low + 1, j = high, temp;

    while (i <= j) {
        while (a[i] <= pivot) i++;
        while (a[j] > pivot) j--;

        if (i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int p = partition(a, low, high);
        quicksort(a, low, p - 1);
        quicksort(a, p + 1, high);
    }
}

int main() {
    int a[] = {29, 10, 14, 37, 13};
    int n = 5;

    quicksort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

Sample Output
10 13 14 29 37

Result
Quick Sort executed successfully.

If you want, I can also give you:
✅ Record PDF format
✅ Flowcharts for all programs
✅ All outputs with screenshots style
Just tell me!
