#include <iostream>
using namespace std;
class QuadraticProbe {
private:
    static const int hashSize = 11;
    int hashTable[hashSize];

    int hashFunction(int key) {
        return key%hashSize;
    }
public:
    QuadraticProbe() {
        for (int i = 0; i < hashSize; i++) {
            hashTable[i] = -1;
        }
    }

    void insertItem(int key) {
        int pos = hashFunction(key);
        if (hashTable[pos] == -1) {
            hashTable[pos] = key;
        } else {
        	cout<<"Collision between: "<<key<<" & "<<hashTable[pos]<<endl;
            int increment = 1;
            bool found = false;
            while (!found && increment < hashSize) {
                pos = (pos +(increment*increment)) % hashSize;
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
    QuadraticProbe qp;
    qp.insertItem(10);
    qp.insertItem(22);
    qp.insertItem(49);
    qp.insertItem(66);
    qp.insertItem(72);
    qp.insertItem(85);
    qp.displayTable();
    return 0;
}
