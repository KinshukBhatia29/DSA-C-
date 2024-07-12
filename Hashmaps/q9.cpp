#include <iostream>
using namespace std;
class DoubleHash {
private:
    static const int hashSize = 11;
    int hashTable[hashSize];

    int hash1(int key) {
        return key % hashSize;
    }

    int hash2(int key) {
        return 5 - (key % 5);
    }

    int nextPos(int pos, int increment) {
        return (pos + increment) % hashSize;
    }

public:
    DoubleHash() {
        for (int i = 0; i < hashSize; i++) {
            hashTable[i] = -1;
        }
    }

    void insertItem(int key) {
        int pos = hash1(key);
        if (hashTable[pos] == -1) {
            hashTable[pos] = key;
        } else {
        	cout<<"Collision occured:"<<key<<" & "<<hashTable[pos]<<endl;
            int increment = hash2(key);
            int i = 1;
            while (true) {
                pos = nextPos(pos, i * increment);
                if (hashTable[pos] == -1) {
                    hashTable[pos] = key;
                    break;
                }
                i++;
            }
        }
    }

    void displayTable() {
        cout << "Hash Table: ";
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
    DoubleHash hash;
    hash.insertItem(10);
    hash.insertItem(22);
    hash.insertItem(31);
    hash.insertItem(49);
    hash.insertItem(64);
    hash.insertItem(72);
    hash.insertItem(88);
    hash.displayTable();
    return 0;
}
