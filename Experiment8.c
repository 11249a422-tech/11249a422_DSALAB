PROGRAM 8: DOUBLY LINKED LIST – ALL OPERATIONS
Operations included:
 Insert at beginning
 Insert at end
 Delete from beginning
 Delete from end
 Display (forward)

AIM :
To implement all basic operations on a doubly linked list.

ALGORITHM :
Insert at Beginning
Create new node
new->prev = NULL
new->next = head
If head != NULL → head->prev = new
head = new
Insert at End
Create new node
Traverse to last node
last->next = new
new->prev = last
Delete at Beginning
If list empty → print
temp = head
head = head->next
If head != NULL → head->prev = NULL
Free temp
Delete at End
If list empty → print
Traverse to last
Remove it and free memory
Display
Traverse from head to end and print

PROGRAM :
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

struct node *head = NULL;

void insert_begin() {
    int val;
    printf("Enter value: ");
    scanf("%d", &val);

    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
    newnode->prev = NULL;
    newnode->next = head;

    if(head != NULL)
        head->prev = newnode;

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
        newnode->prev = NULL;
        head = newnode;
        printf("Inserted at end.\n");
        return;
    }

    struct node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
    newnode->prev = temp;

    printf("Inserted at end.\n");
}

void delete_begin() {
    if(head == NULL) {
        printf("List empty.\n");
        return;
    }

    struct node *temp = head;
    head = head->next;

    if(head != NULL)
        head->prev = NULL;

    printf("Deleted: %d\n", temp->data);
    free(temp);
}

void delete_end() {
    if(head == NULL) {
        printf("List empty.\n");
        return;
    }

    struct node *temp = head;

    if(temp->next == NULL) {
        printf("Deleted: %d\n", temp->data);
        free(temp);
        head = NULL;
        return;
    }

    while(temp->next != NULL)
        temp = temp->next;

    printf("Deleted: %d\n", temp->data);
    temp->prev->next = NULL;
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
        printf("\n--- DOUBLY LINKED LIST MENU ---\n");
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

4.Delete End
Deleted: 20

RESULT :
All doubly linked list operations were successfully implemented.
