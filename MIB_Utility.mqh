//+------------------------------------------------------------------+
//|                                                  MIB_Utility.mqh |
//|                                                  Rahul Ravindran |
//|                                      http://www.spizenstudio.com |
//+------------------------------------------------------------------+

#include<Trade\Trade.mqh>

class MIB_Utility{
   
   private: CTrade trade;
   
   public: double GetBid(){
      return NormalizeDouble(SymbolInfoDouble(_Symbol,SYMBOL_BID),_Digits);
   }
   
   double GetAsk(){
      return NormalizeDouble(SymbolInfoDouble(_Symbol,SYMBOL_ASK),_Digits);
   }

   bool BuySellAgent(int BSH, double lot_size, double stop_loss, double take_profit){
        switch(BSH){
            case +1: return BuyOrder(lot_size, stop_loss, take_profit);
            case -1: return SellOrder(lot_size, stop_loss, take_profit);
            case +0: return false;
            default: return false;
        }
   }

    public: uint GetLastTxState(){
        return trade.ResultRetcode();
    }

    public: bool OrderPlaced(int tx_state){
        return (tx_state == TRADE_RETCODE_PLACED);
    }

    public: ulong GetLastOrderTicket(){
        return trade.ResultOrder();
    }

   private: bool BuyOrder(double lot_size, double stop_loss, double take_profit){
      return trade.Buy(
         lot_size, // how much
         NULL, // current symbol
         GetAsk(),  // buy price
         stop_loss* _Point, // Stop Loss
         take_profit* _Point, // Take Profit
         NULL  // Comment
      );
   }
   
   private: bool SellOrder(double lot_size, double stop_loss, double take_profit){
        return trade.Sell(
            lot_size, // how much
            NULL, // current symbol
            GetBid(),  // buy price
            stop_loss* _Point, // Stop Loss
            take_profit* _Point, // Take Profit
            NULL  // Comment
         );
   }
   
};