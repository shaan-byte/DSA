#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string key;
    int val;
    Node* next;

    Node(string key, int val) {
        this->key = key;
        this->val = val;
        this->next = NULL;
    }

    ~Node() {
        if (next != NULL) {
            delete next; // recursively delete chain
        }
    }
};

class HashTable {
    int totsize;
    int currsize;
    Node** table;

public:
    HashTable(int size) {
        totsize = size;
        currsize = 0;
        table = new Node*[totsize];
        for (int i = 0; i < totsize; i++) {
            table[i] = NULL;
        }
    }

    int hashFunction(string key) {
        int idx = 0;
        for (int i = 0; i < key.length(); i++) {
            idx = (idx + (key[i] * key[i])) % totsize;
        }
        return idx;
    }

    void rehash() {
        int oldSize = totsize;
        totsize *= 2;
        Node** oldTable = table;

        table = new Node*[totsize];
        for (int i = 0; i < totsize; i++) {
            table[i] = NULL;
        }
        currsize = 0;

        for (int i = 0; i < oldSize; i++) {
            Node* temp = oldTable[i];
            while (temp != NULL) {
                insert(temp->key, temp->val);
                temp = temp->next;
            }
            if (oldTable[i] != NULL) {
                delete oldTable[i]; // frees whole chain
            }
        }
        delete[] oldTable;
    }

    void insert(string key, int val) {
        int idx = hashFunction(key);

        // Check if key already exists → update
        Node* temp = table[idx];
        while (temp != NULL) {
            if (temp->key == key) {
                temp->val = val;
                return;
            }
            temp = temp->next;
        }

        Node* newNode = new Node(key, val);
        newNode->next = table[idx];
        table[idx] = newNode;
        currsize++;

        double loadFactor = (double)currsize / totsize;
        if (loadFactor > 0.7) {
            rehash();
        }
    }

    void remove(string key) {
        int idx = hashFunction(key);
        Node* temp = table[idx];
        Node* prev = NULL;

        while (temp != NULL) {
            if (temp->key == key) {
                if (prev == NULL) {
                    table[idx] = temp->next;
                } else {
                    prev->next = temp->next;
                }
                temp->next = NULL; // prevent recursive delete
                delete temp;
                currsize--;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }

    int search(string key) {
        int idx = hashFunction(key);
        Node* temp = table[idx];
        while (temp != NULL) {
            if (temp->key == key) {
                return temp->val;
            }
            temp = temp->next;
        }
        return -1;
    }

    void printTable() {
        for (int i = 0; i < totsize; i++) {
            cout << i << ": ";
            Node* temp = table[i];
            while (temp != NULL) {
                cout << "(" << temp->key << "," << temp->val << ") -> ";
                temp = temp->next;
            }
            cout << "NULL\n";
        }
    }
};

int main() {
    HashTable ht(5);

    ht.insert("apple", 10);
    ht.insert("banana", 20);
    ht.insert("orange", 30);

    ht.printTable();

    cout << "Search banana: " << ht.search("banana") << endl;

    ht.remove("banana");
    ht.printTable();

    return 0;
}
