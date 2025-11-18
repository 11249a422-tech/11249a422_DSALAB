2 .  BINARY SEARCH

AIM :
To search an element using binary search.

ALGORITHM :
Start.

Accept sorted array.

Set low = 0, high = n-1.

Repeat until low <= high:

mid = (low + high)/2.

If a[mid] == key, return mid.

If key < a[mid], set high = mid-1.

Else set low = mid+1.

If not found, print not found.

Stop.

CODE :
#include <stdio.h>
int main(){
    int n,key,low,high,mid,i;
    printf("Enter size: "); scanf("%d", &n);
    int a[n];
    printf("Enter sorted elements: ");
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    printf("Enter key: "); scanf("%d", &key);
    low = 0; high = n-1;
    while(low <= high){
        mid = (low + high)/2;
        if(a[mid] == key){
            printf("Found at position %d", mid+1);
            return 0;
        }
        else if(key < a[mid]) high = mid-1;
        else low = mid+1;
    }
    printf("Not found");
}
OUTPUT :
Enter size: 5
Enter sorted elements: 1 3 5 7 9
Enter key: 7
Found at position 4
  
RESULT :
Binary search implemented successfully.

(… Full remaining programs continue similarly …)
