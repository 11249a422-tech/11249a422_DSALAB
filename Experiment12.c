12. CIRCULAR QUEUE
Aim:
To implement Circular Queue using arrays.

Algorithm:
Initialize front = rear = -1
For enqueue:
Check full: (rear+1)%size == front
Insert and update rear
For dequeue:
Check empty
Remove and update front
Display by looping from front to rear.

Code:
#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % MAX == front) {
        printf("Queue Full\n");
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % MAX;
    queue[rear] = x;
}

void dequeue() {
    if (front == -1) {
        printf("Queue Empty\n");
        return;
    }
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;
}

void display() {
    if (front == -1) {
        printf("Queue Empty\n");
        return;
    }
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
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

Sample Output:
10 20 30
20 30

Result:
Circular Queue was implemented successfully.
