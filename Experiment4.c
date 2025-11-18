PROGRAM 4: QUEUE OPERATIONS (INSERT, DELETE, DISPLAY)

AIM :
To implement queue operations (Insert, Delete, Display) using arrays.

ALGORITHM :
  
Insert (Enqueue)
If rear == max−1 → Overflow
Else if front == −1 → front = 0
Increment rear
Insert element at queue[rear]
Delete (Dequeue)
If front == −1 or front > rear → Underflow
Else print queue[front]
Increment front
Display
If queue empty → print message
Else print elements from front to rear

 PROGRAM :

#include <stdio.h>
#define MAX 50

int queue[MAX];
int front = -1, rear = -1;

void insert() {
    int item;
    if(rear == MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        printf("Enter element to insert: ");
        scanf("%d", &item);
        if(front == -1) front = 0;
        queue[++rear] = item;
        printf("Element inserted.\n");
    }
}

void delete() {
    if(front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("Deleted element: %d\n", queue[front]);
        front++;
    }
}

void display() {
    if(front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements:\n");
        for(int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    int ch;
    while(1) {
        printf("\n--- QUEUE MENU ---\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}

SAMPLE OUTPUT :
--- QUEUE MENU ---
1.Insert
2.Delete
3.Display
4.Exit
Enter choice: 1
Enter element to insert: 10
Element inserted.
Enter choice: 1
Enter element to insert: 20
Element inserted.
Enter choice: 3
Queue elements:
10 20
Enter choice: 2
Deleted element: 10

RESULT :
Queue operations using arrays were successfully implemented.
