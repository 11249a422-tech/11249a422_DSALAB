PROGRAM 7: SINGLE LINKED LIST – ALL OPERATIONS
Operations included:
✔ Insert at beginning
✔ Insert at end
✔ Delete at beginning
✔ Delete at end
✔ Display

AIM :
To implement all basic operations on a singly linked list.

ALGORITHM :
Insert at Beginning
Create new node
Set new->next = head
head = new
Insert at End
Create new node
Traverse to last node
last->next = new
Delete at Beginning
If list empty → print
Set temp = head
head = head->next
Free temp
Delete at End
If list empty → print
If one node → delete it
Else traverse to second last
Delete last node
Display
Traverse list and print each node

 PROGRAM :

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert_begin() {
    int val;
    printf("Enter value: ");
    scanf("%d", &val);

    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = head;
    head = newnode;

    printf("Inserted at beginning.\n");
}

void insert_end() {
    int val;
    printf("Enter value: ");
    scanf("%d", &val);

    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;

    if(head == NULL) {
        head = newnode;
        printf("Inserted at end.\n");
        return;
    }

    struct node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
    printf("Inserted at end.\n");
}

void delete_begin() {
    if(head == NULL) {
        printf("List empty.\n");
        return;
    }

    struct node *temp = head;
    head = head->next;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}

void delete_end() {
    if(head == NULL) {
        printf("List empty.\n");
        return;
    }

    struct node *temp = head, *prev = NULL;

    if(head->next == NULL) {
        printf("Deleted: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    while(temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    printf("Deleted: %d\n", temp->data);
    prev->next = NULL;
    free(temp);
}

void display() {
    if(head == NULL) {
        printf("List empty.\n");
        return;
    }

    struct node *temp = head;
    printf("List: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int ch;

    while(1) {
        printf("\n--- SINGLY LINKED LIST MENU ---\n");
        printf("1.Insert Begin\n2.Insert End\n3.Delete Begin\n4.Delete End\n5.Display\n6.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: insert_begin(); break;
            case 2: insert_end(); break;
            case 3: delete_begin(); break;
            case 4: delete_end(); break;
            case 5: display(); break;
            case 6: return 0;
            default: printf("Invalid choice\n");
        }
    }
}

SAMPLE OUTPUT :

1.Insert Begin
Enter value: 10
Inserted at beginning.

2.Insert End
Enter value: 20
Inserted at end.

5.Display
List: 10 20

3.Delete Begin
Deleted: 10

RESULT :
All singly linked list operations were successfully implemented.
