#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            std::cerr << "Error: Queue is empty." << std::endl;
            return -1; // or throw an error
        }
        int val = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;
        if (front == nullptr) {
            rear = nullptr;
        }
        return val;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Error: Queue is empty." << std::endl;
            return -1; // or throw an error
        }
        return front->data;
    }

    bool isEmpty() {
        return (front == nullptr);
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << std::endl;
            return;
        }
        Node* temp = front;
        cout << "Queue: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout <<endl;
    }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();

    std::cout << "Dequeuing: " << q.dequeue() << std::endl;
    std::cout << "Peek: " << q.peek() << std::endl;
    q.display();

    return 0;
}
