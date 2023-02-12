#include <iostream>
using namespace std;

int main() {
    int favorite_number;


    while (true) {
        cout << "Enter your favarite number between 1 and 100: ";
        cin >> favorite_number;
        if (favorite_number > 100 || favorite_number <= 0) {
            cout << "Please select a number between 1 and 100" << endl;
            continue;
        }
        cout << "Amazing!! That's my favarite number too!" << endl;
        cout << "No really!!'" << favorite_number << " is my favarite number!" << endl;
        return 0;

    }

}