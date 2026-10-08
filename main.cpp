#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

void showMenu() {
    cout << "\n--- TASK MANAGER ---\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    vector<Task> tasks;
    int choice;
    
    do {
        showMenu();
        cin >> choice;
        cin.ignore(); // Clear buffer
        
        if (choice == 1) {
            string desc;
            cout << "Enter task description: ";
            getline(cin, desc);
            tasks.push_back({desc, false});
            cout << "Task added successfully!\n";
        } else if (choice == 2) {
            cout << "\nYour Tasks:\n";
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". [" << (tasks[i].completed ? "X" : " ") << "] " << tasks[i].description << "\n";
            }
        }
    } while (choice != 3);
    
    return 0;
}
