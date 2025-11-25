13. STACK USING LINKED LIST
Aim:
To implement stack operations using linked list.

Algorithm:
Maintain top pointer
Push:
Create node
new→next = top
top = new
Pop:
Remove top and free
Display stack.

Code:
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *top = NULL;

void push(int x) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

void pop() {
    if (!top) {
        printf("Stack Empty\n");
        return;
    }
    struct Node *temp = top;
    top = top->next;
    free(temp);
}

void display() {
    struct Node *temp = top;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
}

Sample Output:
30 20 10
20 10

Result:
Stack using Linked List was successfully implemented.
