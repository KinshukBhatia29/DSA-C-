#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(char d) : data(d), next(NULL), prev(NULL) {}
};
void insert(Node*& head, Node*& tail, char data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void reorderLinkedList(Node*& head, Node*& tail) {
    if (head == NULL || head->next == NULL)
        return;

    Node* first = head;
    Node* last = tail;

    while (first != last && first->next != last) {
        Node* Next = first->next;
        Node* Prev = last->prev;

        first->next = last;
        last->prev = first;
        last->next = Next;
        Next->prev = last;

        first = Next;
        last = Prev;
    }
    if (first == last) {
        first->next = NULL;
        last->prev = NULL;
    } else {
        first->next = last;
        last->prev = first;
    }
}
void printLinkedList(Node* head) {
    while (head != NULL) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL"<<endl;
}

int main() {
    int n; 
    int data[100];
    Node* head = NULL;
    Node* tail = NULL;
    cout<<"Enter the number of elements in LL:";
    cin>>n;
    for (int i = 0; i < n; ++i) {
    	cout<<"Enter the Data :";
    	cin>>data[i];
        insert(head, tail, data[i]);
    }
    cout << "Original LL: ";
    printLinkedList(head);
    reorderLinkedList(head, tail);
    cout << "Reordered LL: ";
    printLinkedList(head);
  return 0;
}
