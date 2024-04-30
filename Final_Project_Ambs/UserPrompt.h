#ifndef USERPROMPT_H
#define USERPROMPT_H

#include <queue>
#include <vector>
#include "Order.h"

using namespace std;

void promptUser(priority_queue<Order, vector<Order>, Order::Compare>& pq, int& orderNumber);

#endif // USERPROMPT_H
