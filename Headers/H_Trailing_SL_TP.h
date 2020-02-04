//
// Created by Rahul Ravindran on 01-02-2020.
//

#include "../Structs/S_Ticket.cpp"

class H_Trailing_SL_TP{

    public:
        virtual bool monitor(S_Ticket ticket) = 0;

    private:
        virtual bool modification_decision_maker(S_Ticket ticket) = 0;
        virtual bool modification_computer(S_Ticket ticket) = 0;
        virtual bool buy_order_modification_computer(S_Ticket ticket) = 0;
        virtual bool sell_order_modification_computer(S_Ticket ticket) = 0;
        virtual bool modification_dispatcher(S_Ticket ticket) = 0;

};