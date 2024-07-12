#include <iostream>
using namespace std;

class LinearProbe {
private:
    static const int hashSize = 11;
    int hashTable[hashSize];
    int hashFunction(int key) {
        return key % hashSize;
    }
public:
    LinearProbe() {
        for (int i = 0; i < hashSize; i++) {
            hashTable[i] = -1;
        }
    }
    void insertItem(int key) {
        int pos = hashFunction(key);
        if (hashTable[pos] == -1) {
            hashTable[pos] = key;
        } else {
            bool found = false;
            int increment = 1;
            while (!found && increment < hashSize) {
                pos =(pos + 1) % hashSize;
                if (hashTable[pos] == -1) {
                    found = true;
                    hashTable[pos] = key;
                } else if (hashTable[pos] == key) {
                    found = true;
                }
                increment++;
            }
        }
    }

    void displayTable() {
        cout <<"Hash Table: ";
        for (int i = 0; i < hashSize; i++) {
            if (hashTable[i] != -1) {
                cout << hashTable[i] << " ";
            } else {
                cout << "-1 ";
            }
        }
        cout << endl;
    }
};

int main() {
    LinearProbe lp;
    lp.insertItem(10);
    lp.insertItem(22);
    lp.insertItem(31);
    lp.insertItem(49);
    lp.insertItem(64);
    lp.insertItem(72);
    lp.insertItem(88);
    lp.displayTable();
    return 0;
}
