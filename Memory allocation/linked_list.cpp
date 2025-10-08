#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int v) {
        value = v;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }
    

    // add element at beginning
    void insertFront(int v) {
        Node* fresh = new Node(v);
        fresh->next = head;
        head = fresh;
        cout << ">> " << v << " inserted at start." << endl;
    }

    // print full list
    void printList() {
        if (!head) {
            cout << ">> list is empty." << endl;
            return;
        }

        cout << ">> list: ";
        Node* temp = head;
        while (temp) {
            cout << temp->value;
            if (temp->next) cout << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }

    // remove element at given index
    void deleteAt(int pos) {
        if (!head) {
            cout << ">> Nothing to delete." << endl;
            return;
        }

        if (pos == 0) {
            Node* rem = head;
            head = head->next;
            delete rem;
            cout << ">> First element removed." << endl;
            return;
        }

        Node* prev = nullptr;
        Node* cur = head;
        int count = 0;

        while (cur && count < pos) {
            prev = cur;
            cur = cur->next;
            count++;
        }

        if (!cur) {
            cout << ">> Invalid index." << endl;
            return;
        }

        prev->next = cur->next;
        delete cur;
        cout << ">> Node at position " << pos << " deleted." << endl;
    }

// reverse list
    void reverseList() {
        if (!head) {
            cout << ">> List is empty." << endl;
            return;
        }

        Node* prev = nullptr;
        Node* curr = head;
        Node* nxt = nullptr;

        while (curr) {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        head = prev;
        cout << ">> List reversed." << endl;
    }

    // Find element by index
    void getAt(int pos) {
        if (!head) {
            cout << ">> List empty." << endl;
            return;
        }

        Node* temp = head;
        int idx = 0;

        while (temp) {
            if (idx == pos) {
                cout << ">> Element at index " << pos << " = " << temp->value << endl;
                return;
            }
            temp = temp->next;
            idx++;
        }

        cout << ">> Index out of range." << endl;
    }
};
