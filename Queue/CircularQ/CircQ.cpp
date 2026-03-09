    // Circular Queue implementation in C++

#include <iostream>
#define SIZE 5

int items[SIZE];
int front, rear;


bool isFull() {
	return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
}

bool isEmpty() {
	return front == -1;
}

void enQueue(int element) {
	if (isFull()) {
			std::cout << "Queue full\n";
	}
	else {
		if (front == -1) front = 0;
		rear = (rear + 1) % SIZE;
		items[rear] = element;
		std::cout << "Enqueued " << element << std::endl;
	}
}

int deQueue() {
	if (isEmpty()) {
		std::cout << "Queue empty\n";
		return -1;
	}
	else {
		int element = items[front];
		if (front == rear) {
			front = rear = -1;
		}
		else {
			front = (front + 1) % SIZE;
		}
		return element;
	}
}

void display() {
	if (isEmpty()) {
		std::cout << "Empty Queue\n";
		return;
	}
	std::cout << "Front -> " << front << std::endl;
	front = (front +1) % SIZE;
	for (int i = front; i != rear; i = (i + 1) % SIZE)
		std::cout << items[i] << " ";
		std::cout << items[rear] << std::endl;
		std::cout << "Rear -> " << rear << std::endl;
		front = (front -1) % SIZE;
	}

int main() {
	while (1)
	{
		
		int ch;
		std::cout<<"1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
		std::cin >> ch;
		switch (ch) {
			case 1: {
				int element;
				std::cout << "Enter element to enqueue: ";
				std::cin >> element;
				enQueue(element);
				break;
			}
			case 2:
				{
				int element = deQueue();
				if (element != -1) {
					std::cout << "Dequeued " << element << std::endl;
				}
				break;
			}
			case 3:
				display();
				break;
			case 4:
				return 0;
			default:
				std::cout << "Invalid choice\n";
		}
	}
	

	return 0;
}
