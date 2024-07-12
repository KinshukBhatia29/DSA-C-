#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to split the linked list into two parts
void splitLinkedList(Node* head,int n) {
	Node* firstHalf = NULL;
    Node* secondHalf = NULL;
    if (head == NULL) {
        firstHalf = NULL;
        secondHalf = NULL;
        return;
    }
    // Traverse the first half of the linked list
    int half = n/2;
    firstHalf = head;
    Node *current = head;
    for (int i = 1; i < half; i++) {
        current = current->next;
    }

    // Split the linked list
    secondHalf = current->next;
    current->next = NULL;
    cout << "First half of the linked list: ";
    printLinkedList(firstHalf);

    cout << "Second half of the linked list: ";
    printLinkedList(secondHalf);
}



int main() {
    // Create a sample linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original linked list: ";
    printLinkedList(head);

    // Split the linked list into two halves
    
    splitLinkedList(head,5);

    

    return 0;
}

