#include <iostream>
using namespace std;
class Node {
public:
    int key;
    Node* next;

    Node(int key) {
        this->key = key;
        next =NULL;
    }
};
class HashTable {
private:
    static const int TABLE_SIZE = 10;
    Node** hashTable;

public:
    HashTable() {
        hashTable = new Node*[TABLE_SIZE];
        for (int i = 0; i < TABLE_SIZE; i++) {
            hashTable[i] =NULL;
        }
    }
    int hashFunction(int key) {
        return key % TABLE_SIZE;
    }
    void insertItem(int key) {
        int index = hashFunction(key);
        Node* newNode = new Node(key);
        newNode->next = hashTable[index];
        hashTable[index] = newNode;
    }
    bool searchItem(int key) {
        int index = hashFunction(key);
        Node* temp = hashTable[index];
        while (temp !=NULL) {
            if (temp->key == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    void deleteItem(int key) {
        int index = hashFunction(key);
        Node* temp = hashTable[index];
        Node* prev =NULL;
        if (temp != NULL && temp->key == key) {
            hashTable[index] = temp->next;
            delete temp;
            return;
        }
        while (temp != NULL && temp->key != key) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Key not found in hash table" << endl;
        } else {
            prev->next = temp->next;
            delete temp;
        }
    }

    void displayHash() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            Node* temp = hashTable[i];
            while (temp != NULL) {
                cout << temp->key << " ";
                temp = temp->next;
            }
        }
        cout << endl;
    }
};
int main() {
    HashTable h;
    h.insertItem(1);
    h.insertItem(5);
    h.insertItem(7);
    h.insertItem(8);
    h.displayHash();
    cout <<"Search 1: " << (h.searchItem(1) ? "Found" : "Not Found") << endl;
    h.deleteItem(1);
    h.displayHash();
    return 0;
}
