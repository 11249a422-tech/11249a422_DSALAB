PROGRAM 3: STACK OPERATIONS (PUSH, POP, DISPLAY)

AIM :
To implement stack operations (Push, Pop, Display) using arrays.

ALGORITHM :
Push Operation
If top == max−1 → Overflow
Else
Increment top
Insert element
Pop Operation
If top == −1 → Underflow
Else
Remove element at top
Decrement top
Display Operation
If top == −1 → Stack empty
Else
Print elements from top to bottom

 PROGRAM :

#include <stdio.h>
#define MAX 50
int stack[MAX];
int top = -1;
void push() {
    int item;
    if(top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter element to push: ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
        printf("Element pushed.\n");
    }
}
void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}
void display() {
    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for(int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}
int main() {
    int choice;
    while(1) {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}

SAMPLE OUTPUT :
--- STACK MENU ---
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter element to push: 10
Element pushed.
Enter your choice: 1
Enter element to push: 20
Element pushed.
Enter your choice: 3
Stack elements:
20 10
Enter your choice: 2
Popped element: 20

RESULT :
  Stack operations using arrays were successfully implemented.
