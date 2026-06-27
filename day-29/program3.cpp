#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string to begin: ";
    getline(cin, str);

    while (true) {
        cout << "\n--- String Operations Menu ---" << endl;
        cout << "1. Show current string" << endl;
        cout << "2. Find string length" << endl;
        cout << "3. Reverse the string" << endl;
        cout << "4. Convert to Uppercase" << endl;
        cout << "5. Convert to Lowercase" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice == 6) {
            cout << "Exiting program..." << endl;
            break; // Exits the infinite loop immediately
        }

        switch (choice) {
            case 1:
                cout << "Current String: " << str << endl;
                break;

            case 2: {
                int length = 0;
                while (str[length] != '\0') {
                    length++;
                }
                cout << "Length: " << length << endl;
                break;
            }

            case 3: {
                string rev = str;
                int n = 0;
                while (rev[n] != '\0') {
                    n++;
                }
                for (int i = 0; i < n / 2; i++) {
                    char temp = rev[i];
                    rev[i] = rev[n - i - 1];
                    rev[n - i - 1] = temp;
                }
                cout << "Reversed String: " << rev << endl;
                break;
            }

            case 4: {
                int i = 0;
                while (str[i] != '\0') {
                    if (str[i] >= 'a' && str[i] <= 'z') {
                        str[i] = str[i] - 32;
                    }
                    i++;
                }
                cout << "String updated to Uppercase." << endl;
                break;
            }

            case 5: {
                int i = 0;
                while (str[i] != '\0') {
                    if (str[i] >= 'A' && str[i] <= 'Z') {
                        str[i] = str[i] + 32;
                    }
                    i++;
                }
                cout << "String updated to Lowercase." << endl;
                break;
            }

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}