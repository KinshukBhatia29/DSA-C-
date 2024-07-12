#include <iostream>

const int MAX_SIZE = 100; // Maximum size of the priority queue

class PriorityQueue {
private:
    int arr[MAX_SIZE]; // Array to store elements
    int front, rear; // Pointers to track front and rear of the queue

public:
    // Constructor
    PriorityQueue() {
        front = -1;
        rear = -1;
    }

    // Function to insert an element into the priority queue
    void insert(int val) {
        if (isFull()) {
            std::cout << "Priority Queue is full!" << std::endl;
            return;
        }

        if (isEmpty()) {
            front = 0;
            rear = 0;
            arr[rear] = val;
        } else {
            int i;
            for (i = rear; i >= front; i--) {
                if (val > arr[i]) {
                    arr[i + 1] = arr[i];
                } else {
                    break;
                }
            }
            arr[i + 1] = val;
            rear++;
        }
    }

    // Function to remove the highest priority element from the priority queue
    int remove() {
        if (isEmpty()) {
            std::cout << "Priority Queue is empty!" << std::endl;
            return -1; // Return a default value indicating failure
        }

        int removedItem = arr[front];
        if (front == rear) {
            // Queue becomes empty after removing the only element
            front = -1;
            rear = -1;
        } else {
            front++;
        }
        return removedItem;
    }

    // Function to check if the priority queue is full
    bool isFull() {
        if(rear==MAX_SIZE-1)
        return true;
        else 
		return false;
    }

    // Function to check if the priority queue is empty
    bool isEmpty() {
        if( front == -1 && rear == -1)
		return true;
		else
		return false;
    }
};

int main() {
    PriorityQueue pq;

    // Demonstration of priority queue operations
    pq.insert(10);
    pq.insert(20);
    pq.insert(15);
    pq.insert(5);

    std::cout << "Removing elements from the priority queue: ";
    while (!pq.isEmpty()) {
        std::cout << pq.remove() << " ";
    }
    std::cout << std::endl;

    // Menu-driven main function
    int choice, value;
    PriorityQueue pqMenu;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Insert\n";
        std::cout << "2. Remove\n";
        std::cout << "3. Check if the queue is full\n";
        std::cout << "4. Check if the queue is empty\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter value to insert: ";
                std::cin >> value;
                pqMenu.insert(value);
                break;
            case 2:
                std::cout << "Removed element: " << pqMenu.remove() << std::endl;
                break;
            case 3:
                if (pqMenu.isFull()) {
                    std::cout << "Queue is full\n";
                } else {
                    std::cout << "Queue is not full\n";
                }
                break;
            case 4:
                if (pqMenu.isEmpty()) {
                    std::cout << "Queue is empty\n";
                } else {
                    std::cout << "Queue is not empty\n";
                }
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
