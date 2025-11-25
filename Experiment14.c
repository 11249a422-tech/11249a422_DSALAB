14. QUEUE USING LINKED LIST
Aim

To implement queue operations using linked list.

Algorithm

Maintain front and rear pointers

Enqueue:

Create node

Insert at rear

Dequeue:

Remove from front

Display queue.

Code
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue(int x) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;

    if (!rear)
        front = rear = newNode;
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if (!front) {
        printf("Queue Empty\n");
        return;
    }
    struct Node *temp = front;
    front = front->next;
    if (!front) rear = NULL;
    free(temp);
}

void display() {
    struct Node *temp = front;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
}

Sample Output
10 20 30
20 30

Result

Queue using Linked List executed successfully.
