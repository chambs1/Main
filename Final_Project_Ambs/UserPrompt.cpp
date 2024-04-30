#include "UserPrompt.h"
#include "Order.h"
#include <limits>

void promptUser(priority_queue<Order, vector<Order>, Order::Compare>& pq, int& orderNumber) {
    while (true) {
        string name;
        int items;
        cout << "Enter customer name (or Q to quit): ";
        getline(cin, name);
        if (name == "Q" || name == "q") {
            break;
        }
        while (true) {
            cout << "Enter number of items: ";
            cin >> items;
            // Three branches with input validation- final branch loop is exited
            if (cin.fail()) {
                cin.clear();  // Clear the error flags
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignores the rest of the line
                cout << "Please enter a valid number." << endl; // Re-prompt user
            } else if (items < 1 || items > 24) {
                cout << "Please enter a valid number (1-24): ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;  // Exit the loop if the input is valid
            }
        }

        // Push order to priority queue
        pq.push(Order(name, orderNumber++, items));
    }
}
