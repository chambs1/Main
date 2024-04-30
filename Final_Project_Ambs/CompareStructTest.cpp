#include "Order.h"

void testCompareStruct() {
    Order::Compare compare;

    Order order1("Gary Smith", 1, 16);
    Order order2("Charlie Church", 2, 11);
    Order order3("Lisa Snow", 3, 20);

    bool test1 = compare(order1, order2) == false;
    bool test2 = compare(order2, order1) == true;
    bool test3 = compare(order1, order3) == false;

    if (test1 && test2 && test3) {
        cout << "All tests passed." << endl;
    } else {
        cout << "Some tests failed." << endl;
    }
}
