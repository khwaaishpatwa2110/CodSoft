#include <iostream>
#include <string>
using namespace std;

struct Task {
    string description;
    bool completed;
};

int main() {
    Task tasks[100];
    int taskCount = 0;
    int choice;

    do {
        cout << "\n===== TO-DO LIST MANAGER =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {

        case 1: {
            if (taskCount >= 100) {
                cout << "Task list is full!\n";
                break;
            }

            cout << "Enter task: ";
            getline(cin, tasks[taskCount].description);

            tasks[taskCount].completed = false;
            taskCount++;

            cout << "Task added successfully!\n";
            break;
        }

        case 2: {
            if (taskCount == 0) {
                cout << "No tasks available.\n";
            } else {
                cout << "\n----- TASK LIST -----\n";

                for (int i = 0; i < taskCount; i++) {
                    cout << i + 1 << ". "
                         << tasks[i].description
                         << " ["
                         << (tasks[i].completed ? "Completed" : "Pending")
                         << "]\n";
                }
            }
            break;
        }

        case 3: {
            int taskNumber;

            if (taskCount == 0) {
                cout << "No tasks available.\n";
                break;
            }

            cout << "Enter task number to mark as completed: ";
            cin >> taskNumber;

            if (taskNumber >= 1 && taskNumber <= taskCount) {
                tasks[taskNumber - 1].completed = true;
                cout << "Task marked as completed!\n";
            } else {
                cout << "Invalid task number.\n";
            }

            break;
        }

        case 4: {
            int taskNumber;

            if (taskCount == 0) {
                cout << "No tasks available.\n";
                break;
            }

            cout << "Enter task number to remove: ";
            cin >> taskNumber;

            if (taskNumber >= 1 && taskNumber <= taskCount) {

                for (int i = taskNumber - 1; i < taskCount - 1; i++) {
                    tasks[i] = tasks[i + 1];
                }

                taskCount--;

                cout << "Task removed successfully!\n";
            } else {
                cout << "Invalid task number.\n";
            }

            break;
        }

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
