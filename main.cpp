#include <iostream>
#include <queue>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

struct Patient {
    string name;
    int age;
    int priority;
    string timestamp;

    bool operator<(const Patient& other) const {
        return priority < other.priority;  // max heap
    }                                                                       
};

priority_queue<Patient> pq;

string getCurrentTimestamp() {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    char buf[20];
    snprintf(buf, sizeof(buf), "%02d-%02d-%04d %02d:%02d:%02d",
         ltm->tm_mday, ltm->tm_mon + 1, 1900 + ltm->tm_year,
         ltm->tm_hour, ltm->tm_min, ltm->tm_sec);
    return string(buf);
}

void exportToCSV() {
    ofstream file("appointments.csv");
    file << "Name,Age,Priority,Timestamp\n";
    priority_queue<Patient> temp = pq;
    while (!temp.empty()) {
        Patient p = temp.top();
        temp.pop();
        file << p.name << "," << p.age << "," << p.priority << "," << p.timestamp << "\n";
    }
    file.close();
    cout << "Appointments exported to appointments.csv\n";
}

void bookSlot() {
    string name;
    int age, priority;
    cout << "\n--- Book a Slot ---\n";
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter priority (1-10): ";
    cin >> priority;
    string time = getCurrentTimestamp();

    Patient p;
    p.name = name;
    p.age = age;
    p.priority = priority;
    p.timestamp = time;

    pq.push(p);
    cout << "Slot booked at: " << time << "\n";
}


void viewSchedule() {
    priority_queue<Patient> temp = pq;
    cout << "\n--- Scheduled Patients (High to Low Priority) ---\n";
    int slot = 1;
    while (!temp.empty()) {
        Patient p = temp.top();
        temp.pop();
        cout << "Slot " << slot++ << ": " << p.name << " | Age: " << p.age
             << " | Priority: " << p.priority << " | Time: " << p.timestamp << "\n";
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\n--- Covid Test Center Scheduler ---\n";
        cout << "1. Book a Slot\n2. View Schedule\n3. Export to CSV\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: bookSlot(); break;
            case 2: viewSchedule(); break;
            case 3: exportToCSV(); break;
            case 4: cout << "Exiting..."; return 0;
            default: cout << "Invalid option\n";
        }
    }
}
