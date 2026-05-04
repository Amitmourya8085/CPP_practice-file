#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void showTasks(const vector<string>& tasks) {
    cout << "\n--- Your Tasks ---\n";
    if (tasks.empty()) cout << "List is empty!" << endl;
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
    cout << "------------------\n";
}

// Helper function to save the entire vector to the file
void saveToFile(const vector<string>& tasks) {
    ofstream outFile("tasks.txt"); // No ios::app here! This overwrites the old file.
    for (const string& t : tasks) {
        outFile << t << endl;
    }
    outFile.close();
}

int main() {
    vector<string> tasks;
    string line, task;

    // Load existing tasks
    ifstream inFile("tasks.txt");
    while (getline(inFile, line)) {
        tasks.push_back(line);
    }
    inFile.close();

    int choice;
    while (true) {
        cout << "\n1. View\n2. Add\n3. Remove Task\n4. Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            showTasks(tasks);
        } else if (choice == 2) {
            cout << "Enter new task: ";
            getline(cin, task);
            tasks.push_back(task);
            saveToFile(tasks);
        } else if (choice == 3) {
            showTasks(tasks);
            if (tasks.empty()) continue;

            int delIndex;
            cout << "Enter the number to remove: ";
            cin >> delIndex;

            if (delIndex > 0 && delIndex <= tasks.size()) {
                // .erase() removes the item from the vector
                tasks.erase(tasks.begin() + (delIndex - 1));
                // Now rewrite the file without the deleted task
                saveToFile(tasks);
                cout << "Task removed!\n";
            } 
        } else {
            break;
        }
    }
    return 0;
}
