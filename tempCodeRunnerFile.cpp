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
