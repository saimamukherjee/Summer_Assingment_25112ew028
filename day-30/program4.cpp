#include <iostream>
#include <string>

using namespace std;

// Global constants
const int MAX_PATIENTS = 100;

// Function prototypes
void admitPatient(string names[], int ids[], string diseases[], int &count);
void displayPatients(string names[], int ids[], string diseases[], int count);
void searchPatient(string names[], int ids[], string diseases[], int count);

int main() {
    string patientNames[MAX_PATIENTS];
    int patientIds[MAX_PATIENTS];
    string patientDiseases[MAX_PATIENTS];
    int patientCount = 0;
    int choice;

    do {
        cout << "\n--- Hospital Management System ---\n";
        cout << "1. Admit New Patient\n";
        cout << "2. Display All Patients\n";
        cout << "3. Search Patient by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                admitPatient(patientNames, patientIds, patientDiseases, patientCount); 
                break;
            case 2: 
                displayPatients(patientNames, patientIds, patientDiseases, patientCount); 
                break;
            case 3: 
                searchPatient(patientNames, patientIds, patientDiseases, patientCount); 
                break;
            case 4: 
                cout << "Exiting system. Goodbye!\n"; 
                break;
            default: 
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

// Function to add/admit a new patient
void admitPatient(string names[], int ids[], string diseases[], int &count) {
    if (count < MAX_PATIENTS) {
        cout << "\nEnter Patient Name: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, names[count]);
        
        cout << "Enter Unique Patient ID: ";
        cin >> ids[count];
        
        cout << "Enter Diagnosis/Disease: ";
        cin.ignore();
        getline(cin, diseases[count]);
        
        count++;
        cout << "Patient admitted successfully!\n";
    } else {
        cout << "\nHospital bed capacity full!\n";
    }
}

// Function to view all patient records
void displayPatients(string names[], int ids[], string diseases[], int count) {
    if (count == 0) {
        cout << "\nNo patients currently admitted.\n";
        return;
    }
    
    cout << "\nID\tPatient Name\t\tDiagnosis\n";
    cout << "--------------------------------------------------\n";
    for (int i = 0; i < count; i++) {
        cout << ids[i] << "\t" << names[i] << "\t\t" << diseases[i] << endl;
    }
}

// Function to look up a patient using their ID
void searchPatient(string names[], int ids[], string diseases[], int count) {
    int searchId;
    bool found = false;
    
    if (count == 0) {
        cout << "\nNo records available to search.\n";
        return;
    }

    cout << "\nEnter Patient ID to search: ";
    cin >> searchId;

    for (int i = 0; i < count; i++) {
        if (ids[i] == searchId) {
            cout << "\n--- Record Found ---\n";
            cout << "Name: " << names[i] << "\n";
            cout << "Diagnosis: " << diseases[i] << "\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Patient with ID " << searchId << " not found.\n";
    }
}