//+------------------------------------------------------------------+
//|                                             MasterInsightBot.mq5 |
//|                                                  Rahul Ravindran |
//|                                      http://www.spizenstudio.com |
//+------------------------------------------------------------------+
#include "Sources/Master_Insight_Bot.cpp"
#include "MIB_Utility.mqh"

Master_Insight_Bot mib;

int OnInit(){
   mib = Master_Insight_Bot();
   Alert(mib.OnInit());
   return(INIT_SUCCEEDED);
}

void OnTick(){
    Print(mib.OnTick());
}