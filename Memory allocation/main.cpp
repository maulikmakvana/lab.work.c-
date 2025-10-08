#include <iostream>
#include "linked_list.cpp"
using namespace std;

int main() {
    LinkedList list;
    int choice, val;

    cout << "==== Simple Linked List Program ====" << endl;

    while (true) {
        cout << endl;
        cout << "------ MENU ------" << endl;
        cout << "1. Add element" << endl;
        cout << "2. Show list" << endl;
        cout << "3. Reverse list" << endl;
        cout << "4. Find element by index" << endl;
        cout << "5. Delete element" << endl;
        cout << "0. Exit" << endl;
        cout << "-------------------" << endl;
        cout << "Select option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter number: ";
            cin >> val;
            list.insertFront(val);
            break;

        case 2:
            list.printList();
            break;

        case 3:
            list.reverseList();
            break;

        case 4:
            cout << "Enter index: ";
            cin >> val;
            list.getAt(val);
            break;

        case 5:
            cout << "Enter index to delete: ";
            cin >> val;
            list.deleteAt(val);
            break;

        case 0:
            cout << "Exiting program... Goodbye!" << endl;
            return 0;

        default:
            cout << ">> Invalid choice, try again." << endl;
        }
    }

    return 0;
}
