//
// Created by Rahul Ravindran on 05-02-2020.
//

#include "../../Enums/E_BBHSS.cpp"
#include "../../Enums/E_Risk_Appetite.cpp"
#include "../../Structs/S_Indicator_Data.cpp"

class H_Indicator{

public:
    virtual E_BBHSS verdict(float tick, E_Risk_Appetite risk) = 0;

private:
    E_Risk_Appetite risk = E_Risk_Appetite();

    virtual S_Indicator_Data required_data_extraction(float tick) = 0;
    virtual S_Indicator_Data data_interpretation(S_Indicator_Data extracted_data) = 0;
    virtual E_BBHSS data_output(S_Indicator_Data extracted_data) = 0;
};