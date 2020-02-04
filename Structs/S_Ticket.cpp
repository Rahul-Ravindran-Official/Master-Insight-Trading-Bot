//
// Created by Rahul Ravindran on 02-02-2020.
//

#include "S_Order.cpp"

struct S_Ticket{
    bool is_open;
    int ticket_number;
    int time_executed;
    S_Order order;
};