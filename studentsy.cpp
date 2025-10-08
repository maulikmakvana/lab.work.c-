#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename Tid, typename Tname>
class StudentSy
{
private:
    vector<Tid> id;
    vector<Tname> names;

public:
    void insertStudent(Tid studentID, Tname studentName)
    {
        for (size_t i = 0; i < id.size(); ++i)
        {
            if (id[i] == studentID)
            {
                cout << "ID already exists!" << endl;
                return;
            }
        }
        id.push_back(studentID);
        names.push_back(studentName);
        cout << "Student inserted successfully!" << endl;
    }

    void displayAll()
    {
        if (id.empty())
        {
            cout << "No students available." << endl;
            return;
        }

        cout << "\n--- Student List ---" << endl;
        for (size_t i = 0; i < id.size(); ++i)
        {
            cout << "ID : " << id[i] << " | Name : " << names[i] << endl;
        }
    }

    void findStudent(Tid studentID)
    {
        for (size_t i = 0; i < id.size(); ++i)
        {
            if (id[i] == studentID)
            {
                cout << "Found -> ID: " << id[i] << " | Name: " << names[i] << endl;
                return;
            }
        }
        cout << "Student not found!" << endl;
    }

    void removeStudent(Tid studentID)
    {
        for (size_t i = 0; i < id.size(); ++i)
        {
            if (id[i] == studentID)
            {
                id.erase(id.begin() + i);
                names.erase(names.begin() + i);
                cout << "Deleted successfully!" << endl;
                return;
            }
        }
        cout << "Student not found!" << endl;
    }
};
