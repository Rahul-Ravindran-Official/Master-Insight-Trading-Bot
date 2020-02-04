//
// Created by Yebelo10 on 01-02-2020.
//

#include "../Structs/S_Order.cpp"

class H_Trade_Operation{
    public:
        virtual bool open_trade(S_Ticket order) = 0;
        virtual bool open_trade(S_Ticket order, int ticket) = 0;
        virtual bool close_trade(int ticket) = 0;
};