#include "ProcessOrders.h"

// Void function takes one parameter
void processOrders(priority_queue<Order, vector<Order>, Order::Compare>& pq) {
    int taskNum = 1;
    // Prints header
    cout << "\n  ~~Weekend Orders~~  \n";

    // Prints orders from the top while queue is not empty
    while (!pq.empty()) {
        Order item = pq.top();
        cout << taskNum++ << ". " << item << " --- (" << item.getPriority() << ")" << endl;
        pq.pop();
    }
}
