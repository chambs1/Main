#include "OrderTest.h"

void testOrderClass() {
    Order order1("Brian Smith", 1, 16);
        if (order1.getPriority() == 2) {
            cout << "Test 1 passed.\n";
        } else {
            cout << "Test 1 failed.\n";
        }

    Order order2("Travis Jones", 2, 11);
        if (order2.getPriority() == 3) {
            cout << "Test 2 passed.\n";
        } else {
            cout << "Test 2 failed.\n";
        }

    Order order3("Katie Ludfield", 3, 6);
        if (order3.getPriority() == 4) {
            cout << "Test 3 passed.\n";
        } else {
            cout << "Test 3 failed.\n";
        }

    Order order4("Jimmy Beans", 4, 1);
        if (order4.getPriority() == 5) {
            cout << "Test 4 passed.\n";
        } else {
            cout << "Test 4 failed.\n";
        }
}

