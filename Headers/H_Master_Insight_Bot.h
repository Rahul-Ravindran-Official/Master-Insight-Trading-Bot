//
// Created by Rahul Ravindran on 01-02-2020.
//

#include "../Structs/S_Order.cpp"
#include "../Structs/S_Ticket.cpp"

class H_Master_Insight_Bot{


    public:
        H_Master_Insight_Bot() {}
        virtual int OnInit() = 0;
        virtual int OnTick() = 0;

    private:
        S_Ticket current_ticket;

        virtual int lifecycle_management() = 0;

        virtual int trade_entry() = 0;
        virtual int trade_execution(S_Order& order) = 0;
        virtual int trade_exit() = 0;

};