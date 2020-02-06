//
// Created by Rahul Ravindran on 05-02-2020.
//

#include "../H_Indicator.h"
#include "../../../Structs/S_Indicator_Data.cpp"

class Single_Moving_Average: public H_Indicator{

private: E_Risk_Appetite risk = E_Risk_Appetite();

public:
    E_BBHSS verdict(float tick, E_Risk_Appetite _risk) override {
        risk = _risk;
        S_Indicator_Data sid = required_data_extraction(tick);
        sid = data_interpretation(sid);
        return data_output(sid);
    }

private:
    S_Indicator_Data required_data_extraction(float tick) override {
        S_Indicator_Data sid = S_Indicator_Data();
        return sid;
    }

    S_Indicator_Data data_interpretation(S_Indicator_Data extracted_data) override {
        S_Indicator_Data sid = S_Indicator_Data();
        return sid;
    }

    E_BBHSS data_output(S_Indicator_Data extracted_data) override {
        return BBHSS_STRONG_BUY;
    }
};