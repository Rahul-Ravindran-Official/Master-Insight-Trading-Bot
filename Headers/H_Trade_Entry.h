//
// Created by Rahul Ravindran on 01-02-2020.
//

#include "../Enums/E_BBHSS.cpp"
#include "../Enums/E_BHS.cpp"
#include "../Structs/S_Order.cpp"

class H_Trade_Entry{

    public:
        virtual S_Order monitor(float tick) = 0;

    private:
        virtual E_BBHSS potential_trade_entry_detector(float tick) = 0;
        virtual E_BHS potential_trade_entry_validator(E_BBHSS strength) = 0;
        virtual S_Order trade_risk_setter(E_BHS order_type) = 0;
};