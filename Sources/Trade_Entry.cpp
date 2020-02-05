//
// Created by Rahul Ravindran on 04-02-2020.
//

#include "../Headers/H_Trade_Entry.h"
#include "../Structs/S_Order.cpp"
#include "../Enums/E_BHS.cpp"


class Trade_Entry: public H_Trade_Entry{

    public: S_Order monitor(float tick) override {
        E_BBHSS strength = potential_trade_entry_detector(tick);
        E_BHS operation = potential_trade_entry_validator(strength);
        S_Order order = trade_risk_setter(operation);
        return order;
    }

    private: E_BBHSS potential_trade_entry_detector(float tick) override {
        return BBHSS_STRONG_BUY;
    }

    private: E_BHS potential_trade_entry_validator(E_BBHSS strength) override {
        return BHS_BUY;
    }

    private: S_Order trade_risk_setter(E_BHS order_type) override {
        S_Order order = S_Order();
        return order;
    }

};