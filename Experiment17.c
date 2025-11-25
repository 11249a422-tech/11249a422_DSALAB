17. MERGE SORT and QUICK SORT
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

 18. QUICK SORT
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

Quick Sort executeed successfully.
