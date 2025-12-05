#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

class Student {
public:
    int id;
    string name;
    int age;
    float grade;

    Student() {}
    Student(int id, string name, int age, float grade) {
        this->id = id;
        this->name = name;
        this->age = age;
        this->grade = grade;
    }

    void display() {
        cout << left << setw(10) << id
             << setw(20) << name
             << setw(10) << age
             << setw(10) << grade << endl;
    }
};

class System {
private:
    vector<Student> list;

public:
    void addStudent() {
        int id, age;
        string name;
        float grade;

        cout << "\nEnter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Grade: ";
        cin >> grade;

        list.push_back(Student(id, name, age, grade));
        cout << "\nStudent Added Successfully!\n";
    }

    void showAll() {
        if (list.empty()) {
            cout << "\nNo students available!\n";
            return;
        }

        cout << "\n----- All Students -----\n";
        cout << left << setw(10) << "ID"
             << setw(20) << "Name"
             << setw(10) << "Age"
             << setw(10) << "Grade" << endl;
        cout << "-------------------------------------------\n";

        for (auto &s : list) {
            s.display();
        }
    }

    void search() {
        int id;
        cout << "\nEnter ID to search: ";
        cin >> id;

        for (auto &s : list) {
            if (s.id == id) {
                cout << "\nStudent Found:\n";
                s.display();
                return;
            }
        }
        cout << "\nStudent Not Found!\n";
    }

    void deleteStudent() {
        int id;
        cout << "\nEnter ID to delete: ";
        cin >> id;

        for (int i = 0; i < list.size(); i++) {
            if (list[i].id == id) {
                list.erase(list.begin() + i);
                cout << "\nStudent Deleted Successfully!\n";
                return;
            }
        }
        cout << "\nStudent Not Found!\n";
    }

    void saveToFile() {
        ofstream file("students.txt");
        for (auto &s : list) {
            file << s.id << "," << s.name << "," << s.age << "," << s.grade << "\n";
        }
        file.close();
        cout << "\nData Saved to File!\n";
    }
};

int main() {
    System sys;
    int choice;

    while (true) {
        cout << "\n===== STUDENT MANAGEMENT MENU =====";
        cout << "\n1. Add Student";
        cout << "\n2. Show All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Delete Student";
        cout << "\n5. Save to File";
        cout << "\n6. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: sys.addStudent(); break;
            case 2: sys.showAll(); break;
            case 3: sys.search(); break;
            case 4: sys.deleteStudent(); break;
            case 5: sys.saveToFile(); break;
            case 6: cout << "Exiting..."; return 0;
            default: cout << "Invalid Choice!\n";
        }
    }
}
