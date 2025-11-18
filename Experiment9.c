PROGRAM 9: STACK USING LINKED LIST
Operations:
 Push
 Pop
 Display

AIM :
To implement stack operations using a linked list.

ALGORITHM :
Push
Create new node
new->next = top
top = new
Pop
If top == NULL → Underflow
temp = top
top = top->next
Free temp
Display
Traverse from top to bottom

 PROGRAM :
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void push() {
    int val;
    printf("Enter value: ");
    scanf("%d", &val);

    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = top;
    top = newnode;

    printf("Pushed.\n");
}

void pop() {
    if(top == NULL) {
        printf("Stack Underflow\n");
        return;
    }

    struct node *temp = top;
    printf("Popped: %d\n", temp->data);
    top = top->next;
    free(temp);
}

void display() {
    if(top == NULL) {
        printf("Stack empty\n");
        return;
    }

    struct node *temp = top;
    printf("Stack: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int ch;

    while(1) {
        printf("\n--- STACK (LINKED LIST) MENU ---\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}

SAMPLE OUTPUT :
1.Push
Enter value: 10
Pushed.

1.Push
Enter value: 20
Pushed.

3.Display
Stack: 20 10

2.Pop
Popped: 20

RESULT :
Stack operations were successfully implemented using a linked list.
