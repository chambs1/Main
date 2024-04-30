#include "Order.h"

Order::Order(string name, int number, int items) : customerName(name), orderNumber(number), numItems(items) {}

int Order::getPriority() const {
    if (numItems > 20) {
        return 1;
    } else if (numItems > 15) {
        return 2;
    } else if (numItems > 10) {
        return 3;
    } else if (numItems > 5) {
        return 4;
    } else {
        return 5;
    }
}

ostream& operator<<(ostream& os, const Order& order) {
    os << "Order number: " << order.orderNumber << ", Customer name: " << order.customerName << ", " << order.numItems;
    return os;
}
