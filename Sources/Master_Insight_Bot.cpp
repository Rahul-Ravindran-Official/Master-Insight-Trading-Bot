#include "../Headers/H_Master_Insight_Bot.h"
#include "../Structs/S_Order.cpp"
#include "../Structs/S_Ticket.cpp"
#include "../MIB_Utility.mqh"
class Master_Insight_Bot: public H_Master_Insight_Bot{

    private: MIB_Utility utility;
    private: S_Ticket current_ticket;

    public: int OnInit() override {
        return 0;
    }

    public: int OnTick() override {
        lifecycle_management();
        return 1;
    }

    private: int lifecycle_management() override {

        if (current_ticket.is_open) {
            // There exists an order
            trade_exit();
        }else {
            // There exists no order
            trade_entry();
        }

        return 0;
    }

    private: int trade_entry() override {
        return 0;
    }

    private: int trade_execution(S_Order& order) override {
        bool verdict = utility.BuySellAgent(
            order.bsh,
            order.lots,
            order.stop_loss,
            order.take_profit
        );

        int tx_state = utility.GetLastTxState();

        // Order May Be Successful
        if (verdict && utility.OrderPlaced(tx_state)){
            current_ticket.order = order;
            current_ticket.ticket_number = utility.GetLastOrderTicket();
            current_ticket.is_open = true; 
            return 1;
        }

        return 0;
    }

    private: int trade_exit() override {
        return 0;
    }
};