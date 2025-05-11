#include <iostream>    // Include the input-output stream library
using namespace std;

int main() {
    int amount;   // Variable to store the amount user wants to withdraw
    cout << "Welcome to the ATM System" << endl;

    // Infinite loop to repeatedly ask user for input
    while (true) {
        cout << "Enter amount to withdraw (or -1 to exit): ";
        cin >> amount;

        // Check if input is invalid (e.g., non-integer)
        if (cin.fail()) {
            cout << "Bad input detected!" << endl;

            // Display the current stream state
            cout << "Stream state after error:" << endl;
            cout << "cin.rdstate(): " << cin.rdstate() << endl;
            cout << "cin.eof(): " << cin.eof() << endl;
            cout << "cin.fail(): " << cin.fail() << endl;
            cout << "cin.bad(): " << cin.bad() << endl;
            cout << "cin.good(): " << cin.good() << endl;

            // Clear error flags and ignore invalid input
            cin.clear();                // Reset the stream state
            cin.ignore(1000, '\n');     // Discard invalid input up to 1000 characters or until newline

            cout << "Clearing error and retrying..." << endl;
            continue;      // Prompt user again
        }

        // If user enters -1, exit the loop
        if (amount == -1) {
            cout << "Thank you for using our ATM!" << endl;
            break;
        }

        // Check if the entered amount is not valid (zero or negative)
        if (amount <= 0) {
            cout << "Amount must be greater than 0." << endl;
            continue;
        }

        // Simulate cash withdrawal
        cout << "Please take your cash: $" << amount << endl;
    }

    return 0;    // Indicate successful program termination
}
