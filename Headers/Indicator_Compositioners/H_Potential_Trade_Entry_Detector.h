//
// Created by Rahul on 05-02-2020.
//

#include "../../Enums/E_BBHSS.cpp"
#include "../../Enums/E_Risk_Appetite.cpp"

class H_Potential_Trade_Entry_Detector {

public:
    H_Potential_Trade_Entry_Detector()= default;
    virtual E_BBHSS verdict(float tick, E_Risk_Appetite risk) = 0;

private:
    E_Risk_Appetite risk = E_Risk_Appetite();
    virtual int signal_combiner() = 0;
    virtual int recommended_weightage_combinations(int combination) = 0;
};