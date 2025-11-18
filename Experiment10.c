PROGRAM 10: QUEUE USING LINKED LIST
Operations:
Enqueue (Insert)
Dequeue (Delete)
Display

AIM :
To implement queue operations using a linked list.

ALGORITHM :
Enqueue
Create new node
If queue empty → front = rear = new
Else rear->next = new; rear = new
Dequeue
If queue empty → Underflow
temp = front
front = front->next
If front == NULL → rear = NULL
Free temp
Display
Traverse from front to rear

PROGRAM :
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue() {
    int val;
    printf("Enter value: ");
    scanf("%d", &val);

    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;

    if(front == NULL) {
        front = rear = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }

    printf("Inserted.\n");
}

void dequeue() {
    if(front == NULL) {
        printf("Queue Underflow\n");
        return;
    }

    struct node *temp = front;
    printf("Deleted: %d\n", temp->data);

    front = front->next;
    if(front == NULL)
        rear = NULL;

    free(temp);
}

void display() {
    if(front == NULL) {
        printf("Queue empty\n");
        return;
    }

    struct node *temp = front;
    printf("Queue: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int ch;

    while(1) {
        printf("\n--- QUEUE (LINKED LIST) MENU ---\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}

SAMPLE OUTPUT :
1.Enqueue
Enter value: 10
Inserted.

1.Enqueue
Enter value: 20
Inserted.

3.Display
Queue: 10 20

2.Dequeue
Deleted: 10

RESULT :
Queue operations were successfully implemented using a linked list.
