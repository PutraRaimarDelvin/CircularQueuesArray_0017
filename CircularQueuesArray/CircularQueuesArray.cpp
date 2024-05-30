#include <iostream>
using namespace std;


int main() {
    Queues q;
    char ch;

    while (true) {
        try {
            cout << "Menu" << endl;
            cout << "1. Implement insert operation" << endl;
            cout << "2. Implement delete operation" << endl;
            cout << "3. Display values" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice (1-4): ";
            cin >> ch;
            cout << endl;

            switch (ch)
            {
            case '1':
                q.insert();
                break;
            case '2':
                q.remove();
                break;
            case '3':
                q.display();
                break;
            case '4':
                return 0;
            default:
                cout << "Invalid option!!" << endl;
                break;
            }
        }
        catch (exception& e) {
            cout << "Check for the values entered." << endl;
        }
    }
    return 0;
}