#include <stdio.h>

#define MAX 5   // size of queue

int queue[MAX];
int front = 0;
int rear  = 0;
int count = 0;   // number of elements in queue

int isEmpty() {
    return count == 0;
}

int isFull() {
    return count == MAX;
}

void enqueue(int x) {
    if (isFull()) {
        printf("Queue is full (overflow)\n");
        return;
    }
    queue[rear] = x;
    rear = (rear + 1) % MAX;  // move rear circularly
    count++;
    printf("Enqueued %d (front=%d, rear=%d, count=%d)\n", x, front, rear, count);
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty (underflow)\n");
        return -1;
    }
    int val = queue[front];
    front = (front + 1) % MAX;  // move front circularly
    count--;
    printf("Dequeued %d (front=%d, rear=%d, count=%d)\n", val, front, rear, count);
    return val;
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    for (int j = 0; j < count; j++) {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input\n");
            while (getchar() != '\n');  // clear buffer
            continue;
        }

        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            enqueue(value);
        } else if (choice == 2) {
            dequeue();
        } else if (choice == 3) {
            display();
        } else if (choice == 4) {
            break;
        } else {
            printf("Choose between 1 and 4\n");
        }
    }
    return 0;
}
