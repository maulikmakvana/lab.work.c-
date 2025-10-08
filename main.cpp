#include <iostream>
#include "StudentSy.cpp"
using namespace std;

int main()
{
    StudentSy<int, string> system1;
    int choice, studentID;
    string studentName;

    do
    {
        cout << "\n== Student Management Menu ==" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View All Students" << endl;
        cout << "3. Search by ID" << endl;
        cout << "4. Delete by ID" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Student ID: ";
            cin >> studentID;
            cin.ignore();
            cout << "Enter Student Name: ";
            getline(cin, studentName);
            system1.insertStudent(studentID, studentName);
            break;

        case 2:
            system1.displayAll();
            break;

        case 3:
            cout << "Enter ID to search: ";
            cin >> studentID;
            system1.findStudent(studentID);
            break;

        case 4:
            cout << "Enter ID to delete: ";
            cin >> studentID;
            system1.removeStudent(studentID);
            break;

        case 0:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}
