#include <QCoreApplication>
#include "Order.h"
#include "UserPrompt.h"
#include "ProcessOrders.h"
#include "OrderTest.h"
#include "CompareStructTest.cpp"

int main() {
    // Create a new priority Queue
    priority_queue<Order, vector<Order>, Order::Compare> pq;
    // Initialize orderNumber to a starting point (can be any)
    int orderNumber = 100;

    // Call functions
    promptUser(pq, orderNumber);
    processOrders(pq);

    // Call tests (can be commented out in final program)
    cout << "\n--Testing--\n";

    cout << "\nTestOrderClass() results: \n";
    testOrderClass();

    cout << "\ntestCompareStruct() results: \n";
    testCompareStruct();

    return 0;
}
