#ifndef PROCESSORDERS_H
#define PROCESSORDERS_H

#include <queue>
#include <vector>
#include "Order.h"

using namespace std;

void processOrders(priority_queue<Order, vector<Order>, Order::Compare>& pq);

#endif // PROCESSORDERS_H
