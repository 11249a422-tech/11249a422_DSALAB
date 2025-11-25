 11. DOUBLY LINKED LIST
Aim:
To implement insertion, deletion and traversal operations on a Doubly Linked List in C.

Algorithm:
Start the program
Create a struct node with prev, data, next
For insertion at beginning:
Create new node
Set new→next = head
Update head
For deletion:
Traverse to element
Adjust prev and next links
For display:
Traverse from head and print
Stop.

Code:
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Node *head = NULL;

void insertBegin(int x) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    head = newNode;
}

void delete(int x) {
    struct Node *temp = head;
    while (temp && temp->data != x)
        temp = temp->next;
    if (!temp) return;

    if (temp->prev) temp->prev->next = temp->next;
    else head = temp->next;

    if (temp->next) temp->next->prev = temp->prev;
    free(temp);
}

void display() {
    struct Node *temp = head;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    insertBegin(30);
    insertBegin(20);
    insertBegin(10);
    display();
    delete(20);
    display();
    return 0;
}

Sample Output"
10 20 30
10 30

Result :
Doubly Linked List operations were successfully implemented
