1. Linear Search
AIM :
To search an element in an array using linear search.

ALGORITHM :
Start.

Read array size and elements.

Read the key element to search.

Traverse the array from index 0 to n-1.

If element equals key, return position.

If not found, print not found.

Stop.

CODE :
#include <stdio.h>
int main() {
    int n, key, i;
    printf("Enter size: "); scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    printf("Enter key: "); scanf("%d", &key);
    for(i=0;i<n;i++){
        if(a[i] == key){
            printf("Found at position %d", i+1);
            return 0;
        }
    }
    printf("Not found");
    return 0;
}
OUTPUT :
Enter size: 5
Enter elements: 2 5 8 3 1
Enter key: 8
Found at position 3
  
RESULT :
Linear search implemented successfully.
