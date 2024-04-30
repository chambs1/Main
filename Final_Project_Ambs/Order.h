#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <iostream>

using namespace std;

class Order {
private:
    string customerName;
    int orderNumber;
    int numItems;

public:
    Order(string name, int number, int items);
    int getPriority() const;
    friend ostream& operator<<(ostream& os, const Order& order);

    // Custom comparator determines element order in queue
    struct Compare {
        // Compares priorities of two elements
        bool operator()(const Order& a, const Order& b) {
            // Default is true: first elements should come after the second
            return a.getPriority() > b.getPriority();
        }
    };
};

#endif // ORDER_H
